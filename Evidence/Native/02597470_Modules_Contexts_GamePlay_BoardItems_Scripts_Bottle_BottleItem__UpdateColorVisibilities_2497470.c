/* IL2CPP: Modules.Contexts.GamePlay.BoardItems.Scripts.Bottle.BottleItem$$UpdateColorVisibilities
void Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__UpdateColorVisibilities (Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.GamePlay.BoardItems.Scripts.Bottle.BottleItem$$UpdateColorVisibilities
   void Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__UpdateColorVisibilities
   (Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem_o* __this, const MethodInfo*
   method); */

void Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__UpdateColorVisibilities_2497470
               (long param_1)

{
  undefined *puVar1;
  long lVar2;
  int iVar3;
  
  if ((bRam0000000005c2b2ef & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_05780fc0);
                    /* try { // try from 0259749c to 0269749f has its CatchHandler @ 025975d4 */
    FUN_012d0dc8(PTR_DAT_057f2468);
    bRam0000000005c2b2ef = 1;
  }
  puVar1 = PTR_DAT_057f2468;
                    /* try { // try from 025974a8 to 026974b7 has its CatchHandler @ 025975d0 */
  lVar2 = *(long *)(param_1 + 0x80);
  if (lVar2 != 0) {
    iVar3 = 0;
    do {
                    /* try { // try from 025974bc to 026974c7 has its CatchHandler @ 025975cc */
      if (*(int *)(lVar2 + 0x18) <= iVar3) {
        if (*(int *)(lVar2 + 0x18) < 1) {
          return;
        }
        iVar3 = 0;
        goto LAB_0259750c;
      }
      lVar2 = System_Collections_Generic_List_object___get_Item_21fc76c
                        (lVar2,iVar3,*(undefined8 *)puVar1);
      if (lVar2 == 0) break;
      lVar2 = *(long *)(lVar2 + 0x28);
      if ((lVar2 != 0) && (*(char *)(lVar2 + 0x40) == '\0')) {
        Modules_Contexts_GamePlay_Board_Items_Scripts_QuestionMark_QuestionMarkItem__ShowQuestionMark_2745aa0
                  (lVar2,0);
      }
      lVar2 = *(long *)(param_1 + 0x80);
      iVar3 = iVar3 + 1;
    } while (lVar2 != 0);
  }
LAB_02597558:
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
LAB_0259750c:
  lVar2 = System_Collections_Generic_List_object___get_Item_21fc76c
                    (lVar2,iVar3,*(undefined8 *)puVar1);
  if (lVar2 == 0) goto LAB_02597558;
                    /* try { // try from 02597520 to 02697547 has its CatchHandler @ 025975dc */
  if ((*(long *)(lVar2 + 0x20) != 0) && (*(int *)(*(long *)(lVar2 + 0x20) + 0x50) == 0)) {
    Modules_Contexts_GamePlay_Levels_Scripts_Cell_Cell__TryReveal_1e90f3c(lVar2,0);
  }
  lVar2 = *(long *)(param_1 + 0x80);
  if (lVar2 == 0) goto LAB_02597558;
  iVar3 = iVar3 + 1;
                    /* try { // try from 02597548 to 0269758b has its CatchHandler @ 025973c4 */
  if (*(int *)(lVar2 + 0x18) <= iVar3) {
    return;
  }
  goto LAB_0259750c;
}

