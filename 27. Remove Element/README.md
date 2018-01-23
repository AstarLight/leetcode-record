这里主要学习到了一个STL移除元素的新方法：remove + erase

nums.erase(std::remove(nums.begin(), nums.end(), val), nums.end());
