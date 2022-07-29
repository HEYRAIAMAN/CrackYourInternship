class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* ans = new ListNode((l1->val+l2->val)%10);
        int c = (l1->val+l2->val)/10;
        l1 = l1->next;
        l2 = l2->next;
        
        ListNode* root = ans;
        while(l1 && l2)
        {
            ListNode* temp = new ListNode((l1->val+l2->val+c)%10);
            
            root->next = temp;
            root = root->next;
            
            c = (l1->val+l2->val+c)/10;
            l1 = l1->next;
            l2 = l2->next;
        }
        
        while(l1)
        {
            ListNode* temp = new ListNode((l1->val+c)%10);
            
            root->next = temp;
            root = root->next;
            
            c = (l1->val+c)/10;
            l1 = l1->next;
        }
        
        while(l2)
        {
            ListNode* temp = new ListNode((l2->val+c)%10);
            
            root->next = temp;
            root = root->next;
            
            c = (l2->val+c)/10;
            l2 = l2->next;
        }
        
        if(c!=0)
        {
            ListNode* temp = new ListNode(c%10);
            
            root->next = temp;
            root = root->next;
        }
        
        return ans;
        
    }
};