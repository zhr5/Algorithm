//运用你所掌握的数据结构，设计和实现一个 LRU (最近最少使用) 缓存机制 。 
//
// 
// 
// 实现 LRUCache 类： 
//
// 
// LRUCache(int capacity) 以正整数作为容量 capacity 初始化 LRU 缓存 
// int get(int key) 如果关键字 key 存在于缓存中，则返回关键字的值，否则返回 -1 。 
// void put(int key, int value) 如果关键字已经存在，则变更其数据值；如果关键字不存在，则插入该组「关键字-值」。当缓存容量达到上
//限时，它应该在写入新数据之前删除最久未使用的数据值，从而为新的数据值留出空间。 
// 
//
// 
// 
// 
//
// 进阶：你是否可以在 O(1) 时间复杂度内完成这两种操作？ 
//
// 
//
// 示例： 
//
// 
//输入
//["LRUCache", "put", "put", "get", "put", "get", "put", "get", "get", "get"]
//[[2], [1, 1], [2, 2], [1], [3, 3], [2], [4, 4], [1], [3], [4]]
//输出
//[null, null, null, 1, null, -1, null, -1, 3, 4]
//
//解释
//LRUCache lRUCache = new LRUCache(2);
//lRUCache.put(1, 1); // 缓存是 {1=1}
//lRUCache.put(2, 2); // 缓存是 {1=1, 2=2}
//lRUCache.get(1);    // 返回 1
//lRUCache.put(3, 3); // 该操作会使得关键字 2 作废，缓存是 {1=1, 3=3}
//lRUCache.get(2);    // 返回 -1 (未找到)
//lRUCache.put(4, 4); // 该操作会使得关键字 1 作废，缓存是 {4=4, 3=3}
//lRUCache.get(1);    // 返回 -1 (未找到)
//lRUCache.get(3);    // 返回 3
//lRUCache.get(4);    // 返回 4
// 
//
// 
//
// 提示： 
//
// 
// 1 <= capacity <= 3000 
// 0 <= key <= 3000 
// 0 <= value <= 104 
// 最多调用 3 * 104 次 get 和 put 
// 
// Related Topics 设计 哈希表 链表 双向链表 
// 👍 1460 👎 0

package com.cute.leetcode.editor.cn;
public class LruCache {
    public static void main(String[] args) {
        Solution solution = new LruCache().new Solution();
    }
    //leetcode submit region begin(Prohibit modification and deletion)
    /*
    * 方法一：采用哈希表+双向链表实现，哈希表是为了在O(1)时间get，双向链表是为了方便在O（1）新增、淘汰、get后移到首部
    * */
class LRUCache {

        public class DLinkedNode {
            int key;
            int value;
            DLinkedNode prev;
            DLinkedNode next;
            public DLinkedNode() {}
            public DLinkedNode(int _key, int _value) {key = _key; value = _value;}
       }
       /*双向链表节点*/

        /*哈希表定义*/
        private Map<Integer, DLinkedNode> cache = new HashMap<Integer, DLinkedNode>();
        /*key--node*/
        private int size;
        private int capacity;
        private DLinkedNode head, tail;


    public LRUCache(int capacity) {
        this.size=0;
        this.capacity=capacity;
        head=new DLinkedNode();
        tail=new DLinkedNode();
        head.next=tail;
        tail.prev=head;
    }
    
    public int get(int key) {
        DLinkedNode node=cache.get(key);
        if(node==null) return -1;
        moveToHead(node);
        return node.value;
    }
    
    public void put(int key, int value) {
        DLinkedNode node = cache.get(key);
        if(node==null){
            //如果key不存在，创建一个新节点
            DLinkedNode newNode=new DLinkedNode(key,value);
            //添加到哈希表
            cache.put(key,newNode);
            //添加到双向链表头部
            addToHead(newNode);
            ++size;
            if(size>capacity){
                //若超出容量，删除双向链表尾部节点，并拿到删除的key去哈希表删除
                DLinkedNode tail=removeTail();
                //删除哈希表对应的项
                cache.remove(tail.key);
                --size;
            }
        }else{
            //如果key存在，先通过哈希表定位，再修改value，并移动到头部
            node.value=value;
            moveToHead(node);
        }
    }

    /*
    * 1.新增元素的操作--加入链表头部，若超过容量淘汰链表尾部
    * 所以需要方法
    * 1.移动某元素到头部=(删除该元素+新增元素到头部)
    * 2.新增元素到头部
    * 3.尾部删除=(删除该元素+返回删除的值)
    * 4.删除某元素(任意位置--这时候由于是双向链表所以可以在O(1)时间完成)
    * */
    private  void moveToHead(DLinkedNode node){
        removeNode(node);
        addToHead(node);
    }

    private void addToHead(DLinkedNode node){
        node.prev=head;
        node.next=head.next;
        head.next.prev=node;
        head.next=node;
    }

    private DLinkedNode removeTail(){
        DLinkedNode res=tail.prev;
        removeNode(res);
        return res;
    }

    private void removeNode(DLinkedNode node){
        node.prev.next=node.next;
        node.next.prev=node.prev;
    }
}

/**
 * Your LRUCache object will be instantiated and called as such:
 * LRUCache obj = new LRUCache(capacity);
 * int param_1 = obj.get(key);
 * obj.put(key,value);
 */
//leetcode submit region end(Prohibit modification and deletion)

}