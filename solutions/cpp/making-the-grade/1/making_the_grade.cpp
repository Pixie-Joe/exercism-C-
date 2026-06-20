#include <array>
#include <string>
#include <vector>

// Round down all provided student scores.
std::vector<int> round_down_scores(std::vector<double> student_scores)
{
    // TODO: Implement round_down_scores
    std::vector<int> scores;
    for (int num : student_scores)
    {
        scores.push_back(static_cast<int>(num));
    }
    return {scores};
}

// Count the number of failing students out of the group provided.
int count_failed_students(std::vector<int> student_scores)
{
    // TODO: Implement count_failed_students
    int count = 0;
    for (int scores : student_scores)
    {
        if (scores <= 40)
        {
            ++count;
        }
    }
    return count;
}

// Create a list of grade thresholds based on the provided highest grade.
std::array<int, 4> letter_grades(int highest_score)
{
    // TODO: Implement letter_grades
    int lowest = 40;
    int range = highest_score - lowest;
    int interval = range / 4;
    int D = 41;
    int C = 41 + interval;
    int B = 41 + (2 * interval);
    int A = 41 + (3 * interval);
    return {D, C, B, A};
}

// Organize the student's rank, name, and grade information in ascending order.
std::vector<std::string> student_ranking(
    std::vector<int> student_scores, std::vector<std::string> student_names)
{
    // TODO: Implement student_ranking
    std::vector<std::string> rankings;
    for (size_t i = 0; i < student_names.size(); ++i)
    {
        rankings.push_back(std::to_string(i + 1) + ". " + student_names[i] + ": " + std::to_string(student_scores[i]));
    }
    return rankings;
}

// Create a string that contains the name of the first student to make a perfect
// score on the exam.
std::string perfect_score(std::vector<int> student_scores,
                            std::vector<std::string> student_names)
{
    // TODO: Implement perfect_score
    for (size_t i = 0; i < student_scores.size(); ++i)
    {
        if(student_scores[i] == 100) {
            return student_names[i];
        }
    }
    return "";
}
