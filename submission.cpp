/*
    Author: Zhao Zhang
    Course: CSCI-135
    Instructor: Tong Yi
    Assignment: E7.16

    Define a structure Point. A point has an x- and a y-coordinate. Write a function double
    distance(Point a, Point b) that computes the distance from a to b. Write a program
    that reads the coordinates of the points, calls your function, and displays the result.
*/

#include <iostream>
#include <cmath>

struct Point{
    int x;
    int y;
};

double distance(Point a, Point b){
    double y = pow((double)b.y - a.y,2);
    double x = pow((double)b.x - a.x,2);
    return sqrt(y+x);
}

int main(){
    int x1, x2, y1, y2;
    std::cin >> x1;
    std::cin >> y1;
    std::cin >> x2;
    std::cin >> y2;
    Point firstPoint = {x1, y1};
    Point secondPoint = {x2, y2};
    std::cout << distance(firstPoint, secondPoint) << std::endl;
}