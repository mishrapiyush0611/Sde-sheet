 bool hasCycle(ListNode *head) {
      unordered_set <ListNode *>s;
        ListNode *curr=head;
        for(curr=head;curr!=NULL;curr=curr->next){
            if(s.find(curr)!=s.end()){
                return true;
            }
            s.insert(curr);
        }
        return false;
    }