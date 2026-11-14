#!/bin/bash
rm -f app app.exe

echo "Compilando proyecto (con include y src)..."
g++ -std=c++17 -I include main.cpp src/*.cpp -o app

if [ $? -eq 0 ]; then
    echo "¡Compilacion exitosa!"
    echo "--------------------"
    ./app
else
    echo "Error en la compilacion."
fi
