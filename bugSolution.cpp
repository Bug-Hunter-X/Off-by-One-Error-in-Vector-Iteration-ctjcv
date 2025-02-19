std::vector<int> vec = {1, 2, 3, 4, 5};
for (int i = 0; i < vec.size(); ++i) {
  // Correctly accesses elements within the vector's bounds
  std::cout << vec[i] << " ";
}

//Alternatively using iterators:
for (int& x : vec){
    std::cout << x << " ";
}
