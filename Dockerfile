
FROM marshallasch/ns3:3.32

# install protobuf needed for this
RUN apt-get update && apt-get install -y --no-install-recommends protobuf-compiler

ADD . contrib/rhpman/

RUN ./waf configure --enable-examples --enable-tests && ./waf build


ENTRYPOINT [ "/bin/bash" ]
