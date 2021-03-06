BinaryTree BTCreate(int maxelem);
int BTHeight(BinaryTree Tree);
int BTSize(BinaryTree Tree);
int BTisNil(BTNode Node);
BTNode BTGetRoot(BinaryTree Tree);
BTNode BTGetParent(BinaryTree Tree,BTNode Node);
BTNode BTGetChildLeft(BinaryTree Tree,BTNode Node);
BTNode BTGetChildRight(BinaryTree Tree,BTNode Node);
BTItem BTGetItem(BTNode Node);
void BTInsertRoot(BinaryTree Tree,BTItem Item);
void BTInsertLeft(BinaryTree Tree,BTNode Node,BTItem Item);
void BTInsertRight(BinaryTree Tree,BTNode Node,BTItem Item);
void BTRemove(BinaryTree Tree,BTNode Node);
void BTChange(BinaryTree Tree,BTNode Node,BTItem Item);
void BTPreOrder(BinaryTree Tree,visit Visit);
void BTPostOrder(BinaryTree Tree,visit Visit);
void BTInOrder(BinaryTree Tree,visit Visit);
void BTLevelOrder(BinaryTree Tree,visit Visit);
void BTDestroy(BinaryTree Tree);
List BTGetAllChildren(BinaryTree Tree);