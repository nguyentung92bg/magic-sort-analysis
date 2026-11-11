/* IL2CPP: Modules.Contexts.GamePlay.BoardItems.Scripts.Bottle.BottleItem$$IsSelected
bool Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__IsSelected (Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.GamePlay.BoardItems.Scripts.Bottle.BottleItem$$IsSelected
   bool Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__IsSelected
   (Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem_o* __this, const MethodInfo*
   method); */

bool Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__IsSelected_2497284
               (long param_1)

{
  bool bVar1;
  ulong uVar2;
  long lVar3;
  
  if (*(long *)(param_1 + 0xb8) == 0) {
    bVar1 = false;
  }
  else {
    bVar1 = false;
    if (*(long *)(param_1 + 0xb0) != 0) {
      uVar2 = Modules_Infrastructure_Common_Scripts_Component_Lock__get_IsLocked_40eab78
                        (*(long *)(param_1 + 0xb0),0);
                    /* try { // try from 025972a4 to 026972b3 has its CatchHandler @ 0259736c */
      if ((uVar2 & 1) == 0) {
        lVar3 = *(long *)(param_1 + 0xb8);
        if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_012d0ef0();
        }
        if ((bRam0000000005c3aa95 & 1) == 0) {
          FUN_012d0dc8(PTR_DAT_0576b2b0,0);
          bRam0000000005c3aa95 = 1;
        }
        lVar3 = *(long *)(lVar3 + 0x10);
        if (lVar3 != 0) {
          return 0 < *(int *)(lVar3 + 0x18);
        }
                    /* WARNING: Subroutine does not return */
        FUN_012d0ef0();
      }
      bVar1 = true;
    }
  }
  return bVar1;
}

