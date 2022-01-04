#include <iostream>
#include <Eigen/Dense>
 
using Eigen::VectorXd;
using Eigen::MatrixXd;
 
int main()
{
  int N = 100;
  VectorXd x {{1, 0, 0}};
  MatrixXd P {
    {0.1, 0, 0},
    {0.9, 0.2, 0},
    {0, 0.8, 1}
  };
  for (int i = 0; i < N; i++) {
    x = P * x;
  }
  
  std::cout << x << std::endl;
}