class Student {
  // private section
  private:
      int studentId;
      char name[20];
  
  // public section
  public:
      void assignDetails(int pstudentId, const char pname[]);
      void display();
};
