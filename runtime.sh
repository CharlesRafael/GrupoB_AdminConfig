#!/bin/bash

# Compila el programa con g++
g++ BUscaminas.cpp -o buscaminas

if [ $? -eq 0 ]; then
  echo "Todo bien"
  exit 0
else
  echo "Hubo un error, favor revisar el código"
  exit 1  
fi
