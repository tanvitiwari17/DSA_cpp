            post= curr->next;
            curr->next = prev;
            prev= curr;
            curr = post;
