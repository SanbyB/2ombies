#pragma once
#include <memory>
#include <cmath>

class Run{
public:
    bool running;
};

class Vector{
public:
    Vector(){};
    Vector(std::vector<double> v){ vector = v;}

    std::vector<double> vec(){ return vector; }

    double mag(){
        return std::sqrt(vector.at(0) * vector.at(0) + vector.at(1) * vector.at(1));
    }

    void operator=(std::vector<double> v){ vector = v; }

    Vector operator+(Vector& v){
        Vector res;
        double x = v.vec().at(0) + vector.at(0);
        double y = v.vec().at(1) + vector.at(1);
        res = {x, y};
        return res;
    }

    Vector operator-(Vector& v){
        Vector res;
        double x = -v.vec().at(0) + vector.at(0);
        double y = -v.vec().at(1) + vector.at(1);
        res = {x, y};
        return res;
    }

    Vector operator*(double& d){
        Vector res;
        double x = d * vector.at(0);
        double y = d * vector.at(1);
        res = {x, y};
        return res;
    }

    Vector operator/(double& d){
        Vector res;
        double x = vector.at(0) / d;
        double y = vector.at(1) / d;
        res = {x, y};
        return res;
    }

    Vector norm(){
        Vector res;
        if(!mag()){ 
            res = {0, 0};
            return res;
        }
        double x = vector.at(0) / mag();
        double y = vector.at(1) / mag();
        res = {x, y};
        return res;
    }

private:
    std::vector<double> vector;
};


inline std::shared_ptr<Run> RUN = std::make_shared<Run>();
inline std::shared_ptr<sf::RenderWindow> win = std::make_shared<sf::RenderWindow>(sf::VideoMode(800, 800), "2ombies");
