/* IL2CPP: Modules.Contexts.GamePlay.BoardItems.Scripts.Bottle.BottleItem$$UpdateFillAmountsWithoutAnimation
void Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__UpdateFillAmountsWithoutAnimation (Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.GamePlay.BoardItems.Scripts.Bottle.BottleItem$$UpdateFillAmountsWithoutAnimation
   void 
   Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__UpdateFillAmountsWithoutAnimation
   (Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem_o* __this, const MethodInfo*
   method); */

void Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__UpdateFillAmountsWithoutAnimation_249670c
               (long param_1)

{
  undefined4 uVar1;
  undefined *puVar2;
  undefined4 uVar3;
  long lVar4;
  int iVar5;
  
                    /* try { // try from 02596718 to 0269671b has its CatchHandler @ 02596730 */
                    /* try { // try from 0259671c to 02696747 has its CatchHandler @ 02596704 */
  if ((bRam0000000005c2b2ee & 1) == 0) {
                    /* catch(type#1 @ 054cbd58) { ... } // from try @ 02596718 with catch @ 02596730
                        */
    FUN_012d0dc8(PTR_DAT_05780fc0);
    FUN_012d0dc8(PTR_DAT_057f2468);
    bRam0000000005c2b2ee = 1;
  }
  puVar2 = PTR_DAT_057f2468;
                    /* try { // try from 02596748 to 0269674b has its CatchHandler @ 02596778 */
  lVar4 = *(long *)(param_1 + 0x80);
                    /* try { // try from 0259674c to 0269677b has its CatchHandler @ 02596704 */
  if (lVar4 != 0) {
    iVar5 = 0;
    do {
      if (*(int *)(lVar4 + 0x18) <= iVar5) {
        return;
      }
      lVar4 = System_Collections_Generic_List_object___get_Item_21fc76c
                        (lVar4,iVar5,*(undefined8 *)puVar2);
      if (lVar4 == 0) break;
                    /* catch() { ... } // from try @ 02596748 with catch @ 02596778 */
      lVar4 = *(long *)(lVar4 + 0x20);
                    /* try { // try from 0259677c to 02696787 has its CatchHandler @ 0259679c */
      if (lVar4 != 0) {
        uVar1 = *(undefined4 *)(lVar4 + 0x40);
                    /* try { // try from 02596788 to 02696793 has its CatchHandler @ 02596704 */
        uVar3 = Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__GetIndexFromTheBottom_249545c
                          (param_1,lVar4);
                    /* try { // try from 02596794 to 0269679b has its CatchHandler @ 0259679c */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 0259677c with catch @ 0259679c
                       catch(type#2 @ 00000000) { ... } // from try @ 02596794 with catch @ 0259679c
                        */
        Modules_Contexts_GamePlay_BoardItems_Scripts_Water_WaterItem__SetTargetHeight_1e9e30c
                  (lVar4,uVar1,uVar3,*(undefined4 *)(param_1 + 0x48),0);
      }
      lVar4 = *(long *)(param_1 + 0x80);
      iVar5 = iVar5 + 1;
    } while (lVar4 != 0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

