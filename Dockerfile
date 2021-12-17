
FROM marshallasch/ns3:3.32


LABEL org.opencontainers.version="v1.0.0"

LABEL org.opencontainers.image.authors="Marshall Asch <masch@uoguelph.ca> (https://marshallasch.ca)"
LABEL org.opencontainers.image.url="https://github.com/MarshallAsch/rhpman.git"
LABEL org.opencontainers.image.source="https://github.com/MarshallAsch/rhpman.git"
LABEL org.opencontainers.image.vendor="University of Guelph School of Computer Science"
LABEL org.opencontainers.image.licenses="ISC"
LABEL org.opencontainers.image.title="RHPMAN Data Storage Scheme"
LABEL org.opencontainers.image.description="ns-3 simulation of the RHPMAN data storage scheme for Marshall Asch's Masters research"

ARG BUILD_PROFILE=debug

# install protobuf needed for this
RUN apt-get update && apt-get install -y --no-install-recommends protobuf-compiler libprotobuf-dev

ADD . contrib/rhpman/

RUN ./waf configure --enable-examples --enable-tests --build-profile=${BUILD_PROFILE} && ./waf build


ENTRYPOINT [ "/bin/bash" ]


# these two labels will change every time the container is built
# put them at the end because of layer caching
ARG VCS_REF
LABEL org.opencontainers.image.revision="${VCS_REF}"

ARG BUILD_DATE
LABEL org.opencontainers.image.created="${BUILD_DATE}"
