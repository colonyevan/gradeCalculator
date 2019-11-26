/*
 * Author: Evan Colony
 * Date: 11/26/19
 * Dependencies: None
 * Description: This is the class that handles all the grading. It works on a continous basis,
 *              adding one assignment at a time.
 */

class Grader {
public:
    Grader();
private:
    int method;
    double currentScore;
    double weightAssessed;
    double medianScore;
    double meanScore;
    double sdAbove;
    double sd; // Defined as sdAbove - median score
};