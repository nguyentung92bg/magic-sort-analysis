/* IL2CPP: Modules.Contexts.GamePlay.BoardItems.Scripts.Bottle.BottleItem$$SetLocalScale
void Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__SetLocalScale (Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem_o* __this, UnityEngine_Vector3_o scale, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.GamePlay.BoardItems.Scripts.Bottle.BottleItem$$SetLocalScale
   void Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__SetLocalScale
   (Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem_o* __this, UnityEngine_Vector3_o
   scale, const MethodInfo* method); */

void Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__SetLocalScale_2494104
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  undefined8 *puVar2;
  ulong uVar3;
  int *piVar4;
  long *plVar5;
  
  Modules_Infrastructure_Common_Scripts_Component_AItem__SetLocalScale_40ea0d0(param_4,0);
  lVar1 = *(long *)(param_4 + 0xe0);
  if (lVar1 == 0) {
    return;
  }
  if ((bRam0000000005c3aa93 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_0575a2d8,0);
    bRam0000000005c3aa93 = 1;
  }
  lVar1 = *(long *)(lVar1 + 0x20);
  if ((lVar1 == 0) || (plVar5 = *(long **)(lVar1 + 0x18), plVar5 == (long *)0x0)) {
                    /* WARNING: Subroutine does not return */
    FUN_012d0ef0();
  }
  lVar1 = *plVar5;
  uVar3 = (ulong)*(ushort *)(lVar1 + 0x12a);
  if (uVar3 != 0) {
    piVar4 = (int *)(*(long *)(lVar1 + 0xb0) + 8);
    do {
      if (*(long *)(piVar4 + -2) == *(long *)PTR_DAT_0575a2d8) {
        puVar2 = (undefined8 *)(lVar1 + (long)(*piVar4 + 7) * 0x10 + 0x138);
        goto LAB_041ea9a0;
      }
      uVar3 = uVar3 - 1;
      piVar4 = piVar4 + 4;
    } while (uVar3 != 0);
  }
  puVar2 = (undefined8 *)FUN_0131971c(plVar5,*(long *)PTR_DAT_0575a2d8,7);
LAB_041ea9a0:
                    /* WARNING: Could not recover jumptable at 0x041ea9c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*puVar2)(param_1,param_2,param_3,plVar5,puVar2[1]);
  return;
}

