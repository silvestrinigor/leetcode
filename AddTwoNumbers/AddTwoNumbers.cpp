public class ListNode {
    public int val;
    public ListNode next;
    public ListNode(int val=0, ListNode next=null) {
        this.val = val;
        this.next = next;
    }
}

public class Solution {
    public ListNode AddTwoNumbers(ListNode l1, ListNode l2) {
        var response = new ListNode();
        var l1Next = l1;
        var l2Next = l2;
        var rest = false;
        for (var r = response; r != null; r = r.next){
            if (l1Next != null){
                r.val += l1Next.val;
                l1Next = l1Next.next;
            }
            if (l2Next != null){
                r.val += l2Next.val;
                l2Next = l2Next.next;
            }
            if (rest){
                r.val ++;
            }
            if (r.val >= 10){
                r.val -= 10;
                rest = true;
            }
            else {
                rest = false;
            }
            if (rest == true || l2Next != null || l1Next != null){
                r.next = new ListNode();
            }
        }
        return response;
    }
}