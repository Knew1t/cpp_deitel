#include <string>

class GradeBook {
  public:
    GradeBook(std::string, std:: string);
    std::string getCourseName() const; // gets the course name
    std::string getInstructorName() const;
    void setCourseName(std::string); // gets the course name
    void setInstructorName(std::string); // gets the course name
    void displayMessage() const;

  private:
    std::string courseName;
    std::string courseInstructorName;
};
