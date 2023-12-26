FROM ubuntu:22.04

RUN apt-get update && apt-get install -y \
    g++ \
    make

WORKDIR /usr/src/SOEP

COPY . .

RUN make

CMD ["./SOEP"]