#!/bin/bash

while true
do
    clear

    echo "========== C++ PROJECTS =========="
    echo
    echo "[1] Rock Paper Scissors"
    echo "[2] Math Quiz Game"
    echo "[0] Exit"
    echo

    read -p "Choose a project: " choice

    case $choice in
        1)
            g++ "Project 01 - Rock Paper Scissors .cpp" -o game
            if [ $? -eq 0 ]; then
                ./game
            fi
            read -p "Press Enter to continue..."
            ;;
        2)
            g++ "Project 02 - Math Quiz Game .cpp" -o game
            if [ $? -eq 0 ]; then
                ./game
            fi
            read -p "Press Enter to continue..."
            ;;
        0)
            echo "Goodbye!"
            break
            ;;
        *)
            echo "Invalid choice!"
            sleep 1
            ;;
    esac
done