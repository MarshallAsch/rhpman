
FROM marshallasch/ns3:3.32


ARG BUILD_PROFILE=debug

# install protobuf needed for this
RUN apt-get update && apt-get install -y --no-install-recommends protobuf-compiler libprotobuf-dev

ADD . contrib/rhpman/

RUN ./waf configure --enable-examples --enable-tests --build-profile=${BUILD_PROFILE} && ./waf build


ENTRYPOINT [ "/bin/bash" ]
