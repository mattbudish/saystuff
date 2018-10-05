FROM jianann/alpine-clang as builder
COPY src/* /opt/code/
WORKDIR /opt/code/build/
RUN cmake .. && make

FROM alpine:latest
RUN apk --no-cache add libstdc++
WORKDIR /opt/app/
COPY --from=builder /opt/code/build/saystuff /opt/code/build/*.so ./
ENTRYPOINT ["./saystuff"]