/* IL2CPP: Modules.Contexts.GamePlay.BoardItems.Scripts.Bottle.BottleItem$$SetDirectionOfWaters
void Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__SetDirectionOfWaters (Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem_o* __this, bool isLeft, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.GamePlay.BoardItems.Scripts.Bottle.BottleItem$$SetDirectionOfWaters
   void Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__SetDirectionOfWaters
   (Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem_o* __this, bool isLeft, const
   MethodInfo* method); */

void Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__SetDirectionOfWaters_2496c48
               (long param_1,uint param_2)

{
  undefined *puVar1;
  long lVar2;
  int iVar3;
  
  if ((bRam0000000005c2b30f & 1) == 0) {
                    /* try { // try from 02596c70 to 02696c73 has its CatchHandler @ 02596e3c */
    FUN_012d0dc8(PTR_DAT_05780fc0);
    FUN_012d0dc8(PTR_DAT_057f2468);
                    /* try { // try from 02596c84 to 02696c8f has its CatchHandler @ 02596e38 */
    bRam0000000005c2b30f = 1;
  }
  puVar1 = PTR_DAT_057f2468;
  lVar2 = *(long *)(param_1 + 0x80);
  if (lVar2 != 0) {
                    /* try { // try from 02596c94 to 02696c9f has its CatchHandler @ 02596e34 */
    iVar3 = 0;
    do {
      if (*(int *)(lVar2 + 0x18) <= iVar3) {
        return;
      }
      lVar2 = System_Collections_Generic_List_object___get_Item_21fc76c
                        (lVar2,iVar3,*(undefined8 *)puVar1);
      if (lVar2 == 0) break;
      if (*(long *)(lVar2 + 0x20) != 0) {
                    /* try { // try from 02596cd0 to 02696d1b has its CatchHandler @ 02596e44 */
        if (((*(long *)(param_1 + 0x80) == 0) ||
            (lVar2 = System_Collections_Generic_List_object___get_Item_21fc76c
                               (*(long *)(param_1 + 0x80),iVar3,*(undefined8 *)puVar1), lVar2 == 0))
           || (*(long *)(lVar2 + 0x20) == 0)) break;
        Modules_Contexts_GamePlay_BoardItems_Scripts_Water_WaterItem__SetDirectionValues_1e9e7dc
                  (*(long *)(lVar2 + 0x20),param_2 & 1,0);
      }
      lVar2 = *(long *)(param_1 + 0x80);
      iVar3 = iVar3 + 1;
    } while (lVar2 != 0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

