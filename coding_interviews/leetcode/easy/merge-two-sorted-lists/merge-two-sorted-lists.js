export class ListNode {
  constructor(val, next) {
    this.val = val === undefined ? 0 : val;
    this.next = next === undefined ? null : next;
  }
}

export function mergeTwoLists(list1, list2) {
  if (!list1 && !list2) {
    return null;
  }

  if (!list1) {
    return list2;
  }

  if (!list2) {
    return list1;
  }

  let newList;

  if (list1.val <= list2.val) {
    newList = new ListNode(list1.val);
    list1 = list1.next;
  } else {
    newList = new ListNode(list2.val);
    list2 = list2.next;
  }

  let node = newList;

  while (list1 && list2) {
    if (list1.val <= list2.val) {
      node.next = new ListNode(list1.val);
      list1 = list1.next;
    } else {
      node.next = new ListNode(list2.val);
      list2 = list2.next;
    }

    node = node.next;
  }

  while (list1) {
    node.next = new ListNode(list1.val);
    node = node.next;
    list1 = list1.next;
  }

  while (list2) {
    node.next = new ListNode(list2.val);
    node = node.next;
    list2 = list2.next;
  }

  return newList;
}
