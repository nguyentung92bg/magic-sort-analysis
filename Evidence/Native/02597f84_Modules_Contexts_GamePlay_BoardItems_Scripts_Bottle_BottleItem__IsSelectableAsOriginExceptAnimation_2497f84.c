/* IL2CPP: Modules.Contexts.GamePlay.BoardItems.Scripts.Bottle.BottleItem$$IsSelectableAsOriginExceptAnimation
bool Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__IsSelectableAsOriginExceptAnimation (Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.GamePlay.BoardItems.Scripts.Bottle.BottleItem$$IsSelectableAsOriginExceptAnimation
   bool 
   Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__IsSelectableAsOriginExceptAnimation
   (Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem_o* __this, const MethodInfo*
   method); */

undefined8
Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__IsSelectableAsOriginExceptAnimation_2497f84
          (long param_1)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  long *plVar4;
  int iVar5;
  
                    /* try { // try from 02597f84 to 02697f87 has its CatchHandler @ 025985cc */
  if ((bRam0000000005c2b2dd & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_05774380);
    FUN_012d0dc8(PTR_DAT_05802430);
                    /* try { // try from 02597fb8 to 02697fcb has its CatchHandler @ 025985d4 */
    bRam0000000005c2b2dd = 1;
  }
  uVar2 = Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__IsEmpty_249577c(param_1);
  puVar1 = PTR_DAT_05802430;
  if ((((uVar2 & 1) != 0) || (*(char *)(param_1 + 0x4c) != '\0')) ||
     (*(char *)(param_1 + 0xec) != '\0')) {
    return 0;
  }
  lVar3 = *(long *)(param_1 + 0x88);
  if (lVar3 != 0) {
    iVar5 = 0;
    do {
      if (*(int *)(lVar3 + 0x18) <= iVar5) {
        return 1;
      }
      plVar4 = (long *)System_Collections_Generic_List_object___get_Item_21fc76c
                                 (lVar3,iVar5,*(undefined8 *)puVar1);
      if (plVar4 == (long *)0x0) break;
      uVar2 = (**(code **)(*plVar4 + 0x1e8))(plVar4,*(undefined8 *)(*plVar4 + 0x1f0));
      if ((uVar2 & 1) == 0) {
        return 0;
      }
                    /* try { // try from 02598018 to 02698037 has its CatchHandler @ 025985d0 */
      lVar3 = *(long *)(param_1 + 0x88);
      iVar5 = iVar5 + 1;
    } while (lVar3 != 0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

