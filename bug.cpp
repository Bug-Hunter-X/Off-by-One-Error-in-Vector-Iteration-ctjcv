std::vector<int> vec = {1, 2, 3, 4, 5};
for (int i = 0; i <= vec.size(); ++i) {
  // Accessing vec[i] will cause an error when i == vec.size()
  std::cout << vec[i] << " ";
}
