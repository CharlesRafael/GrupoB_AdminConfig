FROM ubuntu:latest

RUN apt-get update && \
    apt-get install -y build-essential g++

WORKDIR /app

COPY BUscaminas.cpp .

RUN ls

RUN g++ BUscaminas.cpp -o buscaminas

CMD ["buscaminas"]
