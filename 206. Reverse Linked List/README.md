翻转链表，有迭代方法也有非迭代方法，这里使用的是迭代法，遍历链表，对每个链表的next指针做处理。需要一个临时指针记录原来next指针记录的值。

注意的是，首节点的next指针记得赋值为NULL.
