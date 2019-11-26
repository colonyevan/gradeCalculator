/*
 * Author: Evan Colonh
 * Date: 11/25/19
 * Dependencies: None
 * Description: This class will hold information about each assignment. Both for the class as a whole
 *              and the student using the program.
 */

#include <string>

struct valueHold {
    std::string name;
    double scores[6];
};

class Assignment {
public:
    // Constructors

    /* 
     * Requires: Nothing
     * Modifies: Creates *this
     * Effects:  Creates a deafult assignment. In practice this is useless.
     */
    Assignment();

    /* 
     * Requires: totalScoreIn > 0, weightIn > 0
     * Modifies: Creats *this
     * Effects:  Creates an assignment according to the inputs
     */
    Assignment(std::string nameIn, double totalScoreIn, double weightIn);

    // Setters

    /* 
     * Requires: Nothing
     * Modifies: Nothing
     * Effects:  Sets name
     */
    void setName(std::string nameIn);

    /* 
     * Requires: Nothing
     * Modifies: Nothing
     * Effects:  Sets totalScore
     */
    void setTotalScore(double scoreIn);

    /* 
     * Requires: Nothing
     * Modifies: Nothing
     * Effects:  Sets weight
     */
    void setWeight(double weightIn);

    /* 
     * Requires: Nothing
     * Modifies: Nothing
     * Effects:  Sets avgScore
     */
    void setAvgScore(double scoreIn);

    /* 
     * Requires: Nothing
     * Modifies: Nothing
     * Effects:  Sets medianScore
     */
    void setMedianScore(double scoreIn);

    /* 
     * Requires: Nothing
     * Modifies: Nothing
     * Effects:  Sets standardDeviation
     */
    void setStandardDeviation(double deviationIn);

    /* 
     * Requires: Nothing
     * Modifies: Nothing
     * Effects:  Sets userScore
     */
    void setUserScore(double scoreIn);

    // Getters

    /* 
     * Requires: Name is defined
     * Modifies: Nothing
     * Effects:  Returns name
     */
    std::string getName() const;

    /* 
     * Requires: totalScore is defined
     * Modifies: Nothing
     * Effects:  Returns totalScore
     */
    double getTotalScore() const;

    /* 
     * Requires: weight is defined
     * Modifies: Nothing
     * Effects:  Returns weight
     */
    double getWeight() const;

    /* 
     * Requires: avgScore is defined
     * Modifies: Nothing
     * Effects:  Returns avgScore
     */
    double getAvgScore() const;

    /* 
     * Requires: meanScore is defined
     * Modifies: Nothing
     * Effects:  Returns meanScore
     */
    double getMeanScore() const;

    /* 
     * Requires: medianScore is defined
     * Modifies: Nothing
     * Effects:  Returns medianScore
     */
    double getMedianScore() const;

    /* 
     * Requires: standardDeviation is defined
     * Modifies: Nothing
     * Effects:  Returns standardDeviation
     */
    double getStandardDeviation() const;

    /* 
     * Requires: userScore is defined
     * Modifies: Nothing
     * Effects:  Returns userScore
     */
    double getUserScore() const;

    // Save and Load

    /*
     * Requires: A properly initalized 
     * Modifies: Nothing
     * Effects:  Returns a struct for saving into the 
     */
    valueHold saveAssignment() const;

    /*
     * Requires: A valueHold struct holding valid values
     * Modifies: *this
     * Effects:  Sets all variables according to the valueHold struct
     */
    void loadAssignment(valueHold valueIn);

private:
    // Assignment Information
    std::string name;
    double totalScore; // Strictly greater than 0
    double weight;     // Strictly between 0 and 1 (non-inclusive)

    // Class Score Statistics
    double avgScore;
    double medianScore;
    double standardDeviation;

    // User Stats
    double userScore;
};