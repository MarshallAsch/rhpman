[![Clang-format](https://github.com/MarshallAsch/rhpman/actions/workflows/clang-format.yml/badge.svg)](https://github.com/MarshallAsch/rhpman/actions/workflows/clang-format.yml)
[![build-ns3](https://github.com/MarshallAsch/rhpman/actions/workflows/ns3-build.yml/badge.svg)](https://github.com/MarshallAsch/rhpman/actions/workflows/ns3-build.yml)
[![Create Docker Container](https://github.com/MarshallAsch/rhpman/actions/workflows/deployment.yml/badge.svg)](https://github.com/MarshallAsch/rhpman/actions/workflows/deployment.yml)
![GitHub](https://img.shields.io/github/license/marshallasch/rhpman?style=plastic)
![Lines of code](https://img.shields.io/tokei/lines/github/marshallasch/rhpman?style=plastic)
![NS3 version](https://img.shields.io/badge/NS--3-3.32-blueviolet?style=plastic)
[![DOI](https://zenodo.org/badge/329723579.svg)](https://zenodo.org/badge/latestdoi/329723579)


# rhpman-sim

This NS-3 simulator code module that attempts to implement the RHPMAN scheme
and reproduce its performance evaluation as described by the following paper:

> K. Shi and H. Chen, "RHPMAN: Replication in highly partitioned mobile
> ad hoc networks," International Journal of Distributed Sensor Networks
> Jul. 2014.


This repository is a continuation of the work started by Keefer Rourke to complete
the implementation. 


## Motivation

Our lab<sup>[1]</sup> is investigating ad-hoc mobile mesh networks (MANETs) and
their properties with the hopes that we may inform development of quality mesh
network protocols and network applications.
A challenge with MANETs is their inherently mobile nature.
Much research has been done to discover good algorithms for data distribution
and replication within MANETs, however many of these studies are unreproducible
as-is.

Having identified the RHPMAN scheme as described by Shi and Chen 2014 as a
promising data replication scheme, this project was created to attempt to
implement it on the [ns-3 simulator](https://www.nsnam.org/), and run the scheme
under a similar setting as is described in the performance evaluation conducted
by Shi and Chen.

*Note*: Shi and Chen used the OPNET simulator for their study, however this
simulator does not appear to be widely available anymore. Hence, we have chosen
to use the latest version of the popular ns-3 network simulator instead.

## Building this project

Reproducibility is key in simulation studies, so here's how to build the
project!

 1. This module makes use of [Google protocol buffers] for the network serialization
    install the `protoc` code generator for C++ on your system. [instructions](https://grpc.io/docs/protoc-installation/)
  
 2. Make sure that you have a C++ compiler that has support for at least c++11, and all of the dependencies to install ns-3 installed on your system (see https://www.nsnam.org/wiki/Installation for ns-3 installation instructions)

 3. Download and build copy of the ns-3.32 all-in-one distribution.

    ```sh
    wget https://www.nsnam.org/release/ns-allinone-3.32.tar.bz2
    tar xjvf ns-allinone-3.32.tar.bz2
    cd ns-allinone-3.32
    python3 ./build.py --enable-examples --enable-tests
    ```

 4. Change directories to the `contrib/` folder of the ns-3.32 source
    distribution.

    ```sh
    cd ns-3.32/contrib/
    ```

 5. Clone this repository.

    ```sh
    git clone git@github.com:marshallasch/rhpman.git
    ```

 6. Change directory back to the `ns-3.32` folder of the source distribution
   and re configure the module through the `waf` tool. 

   ```sh
   cd ..
   ./waf configure --enable-tests --enable-examples
   ```

 7. Change directory back to the `ns-3.32` folder of the source distribution
   and run this simulation through the `waf` tool. This will compile the
   simulation code and start executing the code.

   ```sh
   cd ..
   ./waf --run 'rhpman-example'
   ```

## Running the simulation

If you're familiar with ns-3, then you should know that the simulation is run
via the `waf` build tool. Arguments to this program *must* be part of the same
string that is passed to `./waf --run` (that's just how it works :shrug:).

Every parameter of the simulation is configurable. Run the following to see
all the configurable parameters. The default values are as described in the
RHPMAN paper cited at the top of this document.

```
./waf --run 'rhpman-example --printHelp'  # <-- mind the quotes!
```

You can view an animation of the simulation using `NetAnim`, which is included
with the ns-3 all-in-one distribution. To do so, run the following:

```
./waf --run 'rhpman-example --animation-xml=path/to/rhpman.xml
```

This will generate an XML file at the specified path. You can then open this
file with `NetAnim` to view what happens during the simulation run.


## Building the container

This takes a very long time.

```bash
$ docker build \
         --build-arg VCS_REF=$(git rev-parse -q --verify HEAD) \
         --build-arg BUILD_DATE=$(date -u +"%Y-%m-%dT%H:%M:%SZ") \
         --build-arg BUILD_PROFILE=debug \
         -t marshallasch/rhpman:latest .
```

The build variant can be configured using the `BUILD_PROFILE` `build-arg`, it can be set to either `debug`, `release`, or `optimized`.
It is set to `debug` by default.


## Running the container

For convenience this simulation experiment has also been packaged as a prebuilt docker image so that you do not need to install any of the dependencies or compile the simulator yourself. 

There are two ways that the docker container can be used:

1. to run ns-3 simulations directly
2. to get a bash shell in a ns-3 installation


### Interactive bash terminal

The interactive shell will put you in the ns-3 root directory.
Depending on which docker image tag is used ns-3 can either be built in debug mode or optimized mode.
Then the ./waf command can be run manually.

```bash
docker run --rm -it marshallasch/rhpman:optimized bash
```


### To run ns-3 simulations

If anything other than `bash` is given as the command to the Docker container then the command will
be passed to `./waf --run "rhpman-example <command>"` to run a simulation using the flags.

```bash
docker run --rm marshallasch/rhpman:optimized --printHelp
```

### To run all of the simulation experiments

When the `sem` command is given to the docker container all of the simulations will be run and the figures will be generated. 
**WARNING: This will run 7800 experiments that take ~20 minutes each.**
This will attempt to run the simulations in parallel, one per thread.
The number of simultaneous simulations can be changed by setting the `NUM_THREADS` environment variable to the number of threads that should be used. 
When `NUM_THREADS=0` all threads will be used. 
The results will be placed in the `/results` folder. 

```bash
docker run --rm -v "$(pwd)/results:/results" marshallasch/rhpman:optimized sem
```

## Code style

This project is formatted according to the `.clang-format` file included in this
repository. It intentionally deviates from the code style used by the ns-3
library and simulator developers.


## Important assumptions

This **MUST** be run only on IPv4 based networks, the node ID that is used is a 32 bit
identifier that is equal to the IPv4 address of the node.
This ID is used to communicate and assign the nodes as replica holder nodes.
This could be modified to use IPv6 addresses by using a 128 bit value instead. 

Currently the implementation does not support data updates, which was part of the origional description of the algorithm. 
See Issue #10 for more information on that. 

## Getting Help, Contributions, and Feature Requests 

Open an issue for any feature additions, bug reports, or for any support questions.
Contributions to the project are welcome and there is a [Contribution Guide](CONTRIBUTING.md), that can be followed for any modifications or new features. 
We would suggest opening an issue on this project first so it can be discussed and the implementation can be thought about before work begins. 

## License

While ns-3 is itself licensed under the GNU General Public License v2, the code
in this repository is made available under the Internet Systems Consortium (ISC)
License.

A copy of this license is included in this repository, and embedded in the top
of each source file.

<!-- links -->

[1]: https://danielgillis.wordpress.com/students/
[Google Protbuf]: https://developers.google.com/protocol-buffers
