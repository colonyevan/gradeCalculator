/*
 * Author: Evan Colony
 * Date: 11/25/19
 * Dependencies: Assignment.h
 * Description: Implements the Assignment class
 */

#include "Assignment.h"

using namespace std;

Assignment::Assignment() 
    : name(""), totalScore(-1), weight(-1),
      avgScore(-1), medianScore(-1), standardDeviation(-1),
      userScore(-1) {

}

Assignment::Assignment(string nameIn, double totalScoreIn, double wegihtIn)
    : name(nameIn), totalScore(totalScoreIn), weight(wegihtIn),
      avgScore(-1), medianScore(-1), standardDeviation(-1),
      userScore(-1) {

}

void Assignment::setName(string nameIn) {
    name = nameIn;
}

void Assignment::setTotalScore(double scoreIn) {
    totalScore = scoreIn;
}

void Assignment::setWeight(double weightIn) {
    weight = weightIn;
}

void Assignment::setAvgScore(double scoreIn) {
    avgScore = scoreIn;
}

void Assignment::setMedianScore(double scoreIn) {
    medianScore = scoreIn;
}

void Assignment::setStandardDeviation(double deviationIn) {
    standardDeviation = deviationIn;
}

void Assignment::setUserScore(double scoreIn) {
    userScore = scoreIn;
}

string Assignment::getName() const {
    return name;
}

double Assignment::getTotalScore() const {
    return totalScore;
}

double Assignment::getWeight() const {
    return weight;
}

double Assignment::getAvgScore() const {
    return avgScore;
}

double Assignment::getMedianScore() const {
    return medianScore;
}

double Assignment::getStandardDeviation() const {
    return standardDeviation;
}

double Assignment::getUserScore() const {
    return userScore;
}

valueHold Assignment::saveAssignment() const {
    valueHold temp;
    temp.name = name;
    temp.scores[0] = totalScore;
    temp.scores[1] = weight;
    temp.scores[2] = avgScore;
    temp.scores[3] = medianScore;
    temp.scores[4] = standardDeviation;
    temp.scores[5] = userScore;
    return temp;
}

void Assignment::loadAssignment(valueHold valueIn) {
    name = valueIn.name;
    totalScore = valueIn.scores[0];
    weight = valueIn.scores[1];
    avgScore = valueIn.scores[2];
    medianScore = valueIn.scores[3];
    standardDeviation = valueIn.scores[4];
    userScore = valueIn.scores[5];
}