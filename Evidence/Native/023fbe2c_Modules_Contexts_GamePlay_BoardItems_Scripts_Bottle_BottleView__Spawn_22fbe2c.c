/* IL2CPP: Modules.Contexts.GamePlay.BoardItems.Scripts.Bottle.BottleView$$Spawn
void Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleView__Spawn (Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleView_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.GamePlay.BoardItems.Scripts.Bottle.BottleView$$Spawn
   void Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleView__Spawn
   (Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleView_o* __this, const MethodInfo*
   method); */

void Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleView__Spawn_22fbe2c(long *param_1)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  
  puVar1 = PTR_DAT_0576c200;
  if ((bRam0000000005c2a5f7 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_0576c200);
    bRam0000000005c2a5f7 = 1;
  }
  (**(code **)(*param_1 + 0x1b8))(param_1,*(undefined8 *)(*param_1 + 0x1c0));
  lVar3 = param_1[6];
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_0130472c();
  }
                    /* try { // try from 023fbe8c to 024fbeb3 has its CatchHandler @ 023fc0a8 */
  uVar2 = UnityEngine_Object__op_Inequality_408e110(lVar3,0,0);
  if ((uVar2 & 1) != 0) {
    if ((param_1[6] == 0) ||
       (lVar3 = UnityEngine_Component__get_gameObject_408b480(param_1[6],0), lVar3 == 0))
    goto LAB_023fbf14;
    UnityEngine_GameObject__SetActive_408e318(lVar3,1,0);
  }
  lVar3 = param_1[7];
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_0130472c();
  }
                    /* try { // try from 023fbecc to 024fbf2f has its CatchHandler @ 023fc0ac */
  uVar2 = UnityEngine_Object__op_Inequality_408e110(lVar3,0,0);
  if ((uVar2 & 1) == 0) {
    return;
  }
  if ((param_1[7] != 0) &&
     (lVar3 = UnityEngine_Component__get_gameObject_408b480(param_1[7],0), lVar3 != 0)) {
    if (pcRam0000000005c3a388 == (code *)0x0) {
      pcRam0000000005c3a388 = (code *)FUN_012d0d84(&UNK_043edeb4);
    }
                    /* WARNING: Could not recover jumptable at 0x0418e358. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*pcRam0000000005c3a388)(lVar3,1);
    return;
  }
LAB_023fbf14:
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

