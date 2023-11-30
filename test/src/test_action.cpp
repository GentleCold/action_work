#include <gtest/gtest.h>

#include "red_black_tree.hpp"

TEST(test, insert) {
  myalm::RedBlackTree<char, int> rbtree;
  rbtree.insert(std::pair<char, int>('a', 0));
  rbtree.insert(std::pair<char, int>('b', 1));
  rbtree.insert(std::pair<char, int>('c', 2));
  rbtree.insert(std::pair<char, int>('d', 3));
  rbtree.insert(std::pair<char, int>('e', 0));
  rbtree.insert(std::pair<char, int>('f', 1));
  rbtree.insert(std::pair<char, int>('g', 2));

  EXPECT_EQ(rbtree.test_if_red_black_tree(), 0);
}

TEST(test, erase) {
  myalm::RedBlackTree<char, int> rbtree;
  rbtree.insert(std::pair<char, int>('a', 0));
  rbtree.insert(std::pair<char, int>('b', 1));
  rbtree.insert(std::pair<char, int>('c', 2));
  rbtree.insert(std::pair<char, int>('d', 3));
  rbtree.insert(std::pair<char, int>('e', 0));
  rbtree.insert(std::pair<char, int>('f', 1));
  rbtree.insert(std::pair<char, int>('g', 2));

  rbtree.erase('a');
  rbtree.erase('d');
  rbtree.erase('g');
  rbtree.erase('b');

  EXPECT_EQ(rbtree.test_if_red_black_tree(), 0);
}

TEST(test, find) {
  myalm::RedBlackTree<char, int> rbtree;
  rbtree.insert(std::pair<char, int>('a', 0));
  rbtree.insert(std::pair<char, int>('b', 1));
  rbtree.insert(std::pair<char, int>('c', 2));
  rbtree.insert(std::pair<char, int>('d', 3));
  rbtree.insert(std::pair<char, int>('e', 0));
  rbtree.insert(std::pair<char, int>('f', 1));
  rbtree.insert(std::pair<char, int>('g', 2));

  EXPECT_EQ(rbtree.find('c')->second, 2);
}

TEST(test, update) {
  myalm::RedBlackTree<char, int> rbtree;
  rbtree.insert(std::pair<char, int>('a', 0));
  rbtree.insert(std::pair<char, int>('b', 1));
  rbtree.insert(std::pair<char, int>('c', 2));
  rbtree.insert(std::pair<char, int>('d', 3));
  rbtree.insert(std::pair<char, int>('e', 0));
  rbtree.insert(std::pair<char, int>('f', 1));
  rbtree.insert(std::pair<char, int>('g', 2));

  rbtree.insert(std::pair<char, int>('a', 2));
  rbtree.insert(std::pair<char, int>('b', 3));
  rbtree.insert(std::pair<char, int>('c', 4));

  EXPECT_EQ(rbtree.test_if_red_black_tree(), 0);
  EXPECT_EQ(rbtree.find('c')->second, 4);
}

TEST(test, max) {
  myalm::RedBlackTree<char, int> rbtree;
  rbtree.insert(std::pair<char, int>('a', 0));
  rbtree.insert(std::pair<char, int>('b', 1));
  rbtree.insert(std::pair<char, int>('c', 2));
  rbtree.insert(std::pair<char, int>('d', 3));
  rbtree.insert(std::pair<char, int>('e', 0));
  rbtree.insert(std::pair<char, int>('f', 1));
  rbtree.insert(std::pair<char, int>('g', 2));

  EXPECT_EQ(rbtree.max()->first, 'g');
}

TEST(test, min) {
  myalm::RedBlackTree<char, int> rbtree;
  rbtree.insert(std::pair<char, int>('a', 0));
  rbtree.insert(std::pair<char, int>('b', 1));
  rbtree.insert(std::pair<char, int>('c', 2));
  rbtree.insert(std::pair<char, int>('d', 3));
  rbtree.insert(std::pair<char, int>('e', 0));
  rbtree.insert(std::pair<char, int>('f', 1));
  rbtree.insert(std::pair<char, int>('g', 2));

  EXPECT_EQ(rbtree.min()->first, 'a');
}

TEST(test, prev) {
  myalm::RedBlackTree<char, int> rbtree;
  rbtree.insert(std::pair<char, int>('a', 0));
  rbtree.insert(std::pair<char, int>('b', 1));
  rbtree.insert(std::pair<char, int>('c', 2));
  rbtree.insert(std::pair<char, int>('d', 3));
  rbtree.insert(std::pair<char, int>('e', 0));
  rbtree.insert(std::pair<char, int>('f', 1));
  rbtree.insert(std::pair<char, int>('g', 2));

  EXPECT_EQ(rbtree.prev('c')->first, 'b');
}

TEST(test, next) {
  myalm::RedBlackTree<char, int> rbtree;
  rbtree.insert(std::pair<char, int>('a', 0));
  rbtree.insert(std::pair<char, int>('b', 1));
  rbtree.insert(std::pair<char, int>('c', 2));
  rbtree.insert(std::pair<char, int>('d', 3));
  rbtree.insert(std::pair<char, int>('e', 0));
  rbtree.insert(std::pair<char, int>('f', 1));
  rbtree.insert(std::pair<char, int>('g', 2));

  EXPECT_EQ(rbtree.next('c')->first, 'd');
}

TEST(test, erase_not_exist) {
  myalm::RedBlackTree<char, int> rbtree;
  rbtree.insert(std::pair<char, int>('a', 0));
  rbtree.insert(std::pair<char, int>('b', 1));
  rbtree.insert(std::pair<char, int>('c', 2));
  rbtree.insert(std::pair<char, int>('d', 3));
  rbtree.insert(std::pair<char, int>('e', 0));
  rbtree.insert(std::pair<char, int>('f', 1));
  rbtree.insert(std::pair<char, int>('g', 2));

  rbtree.erase('a');
  EXPECT_EQ(rbtree.erase('a'), -1);
}
