cmake_minimum_required(VERSION 3.12)
project(GraSieci)
set(CMAKE_CXX_STANDARD 20)
find_package(SFML 2.5 COMPONENTS graphics system network REQUIRED)
file(GLOB_RECURSE SRC_FILES src/*.cpp)                                  #Wyszukanie wszystkich plików źródłowych znajdujących w folderze src 
file(COPY assets DESTINATION ${CMAKE_BINARY_DIR})                       #Kopiowanie plików png do builda
add_executable(Gra ${SRC_FILES})                                        #Kompilacja plików źródłowych
target_include_directories(Gra PRIVATE include)                         #Pliki nagłówkowe
target_link_libraries(Gra sfml-graphics sfml-network)
