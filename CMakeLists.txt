cmake_minimum_required(VERSION 3.17)
project(CryptoWallet)

add_executable(CryptoWallet
    ./main.cpp
    ./Wallet.cpp
    ./CSVReader.cpp
    ./MerkelMain.cpp
    ./OrderBookEntry.cpp
    ./OrderBook.cpp
)

target_include_directories(CryptoWallet PRIVATE ${CMAKE_CURRENT_SOURCE_DIR})
