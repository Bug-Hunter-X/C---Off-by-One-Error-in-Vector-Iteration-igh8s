std::vector<int> vec = {1, 2, 3, 4, 5};
for (int i = 0; i < vec.size(); ++i) {
  std::cout << vec[i] << " ";
}
std::cout << std::endl; 
//or use iterators for better safety
for (int& x : vec) {
  std::cout << x << " ";
}
std::cout << std::endl;