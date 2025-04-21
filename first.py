class Node:
  def __init__(self,data):
    self.data=data
    self.next=None
class Linked_list:
  def __init__(self):
    self.head=None
  def insert(self,data):
    node=Node(data) 
    if(self.head is None):
      self.head=node
      return     
    last=self.head
    while last.next:
      last=last.next
    last.next=node  
  def print_list(self):
    temp=self.head
    while temp:
      print(temp.data,end="-->")
      temp=temp.next