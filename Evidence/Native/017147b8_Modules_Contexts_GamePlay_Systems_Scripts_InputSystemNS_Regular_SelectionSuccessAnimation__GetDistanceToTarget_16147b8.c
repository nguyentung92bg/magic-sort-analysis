/* IL2CPP: Modules.Contexts.GamePlay.Systems.Scripts.InputSystemNS.Regular.SelectionSuccessAnimation$$GetDistanceToTarget
float Modules_Contexts_GamePlay_Systems_Scripts_InputSystemNS_Regular_SelectionSuccessAnimation__GetDistanceToTarget (Modules_Contexts_GamePlay_Systems_Scripts_InputSystemNS_Regular_SelectionSuccessAnimation_o* __this, Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem_o* bottle1, Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem_o* bottle2, UnityEngine_Vector3_o originBottleTopPosition, float rotation, float riseHeight, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.GamePlay.Systems.Scripts.InputSystemNS.Regular.SelectionSuccessAnimation$$GetDistanceToTarget
   float 
   Modules_Contexts_GamePlay_Systems_Scripts_InputSystemNS_Regular_SelectionSuccessAnimation__GetDistanceToTarget
   (Modules_Contexts_GamePlay_Systems_Scripts_InputSystemNS_Regular_SelectionSuccessAnimation_o*
   __this, Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem_o* bottle1,
   Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem_o* bottle2, UnityEngine_Vector3_o
   originBottleTopPosition, float rotation, float riseHeight, const MethodInfo* method); */

float Modules_Contexts_GamePlay_Systems_Scripts_InputSystemNS_Regular_SelectionSuccessAnimation__GetDistanceToTarget_16147b8
                (float param_1,float param_2,float param_3,undefined1 param_4 [16],float param_5,
                undefined8 param_6,long param_7,long param_8)

{
  undefined *puVar1;
  long *plVar2;
  undefined8 *puVar3;
  long lVar4;
  ulong uVar5;
  int *piVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  
                    /* catch() { ... } // from try @ 01714738 with catch @ 017147c4
                       catch() { ... } // from try @ 017147b4 with catch @ 017147c4 */
                    /* try { // try from 017147c8 to 018147cb has its CatchHandler @ 017147d4 */
                    /* try { // try from 017147cc to 018147d7 has its CatchHandler @ 01714388 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 017147c8 with catch @ 017147d4
                        */
  fVar11 = param_2;
  if ((bRam0000000005c24498 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_0575a2d8);
    bRam0000000005c24498 = 1;
  }
  if ((param_7 != 0) &&
     (plVar2 = (long *)Modules_Infrastructure_Common_Scripts_Component_AItem__get_Root_40e9cf4
                                 (param_7,0), puVar1 = PTR_DAT_0575a2d8, plVar2 != (long *)0x0)) {
    lVar4 = *plVar2;
    uVar5 = (ulong)*(ushort *)(lVar4 + 0x12a);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == *(long *)PTR_DAT_0575a2d8) {
          puVar3 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
          goto LAB_01714878;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    puVar3 = (undefined8 *)FUN_0131971c(plVar2,*(long *)PTR_DAT_0575a2d8,0);
LAB_01714878:
    fVar7 = (float)(*(code *)*puVar3)(plVar2,puVar3[1]);
    if ((param_8 != 0) &&
       (fVar12 = fVar11,
       plVar2 = (long *)Modules_Infrastructure_Common_Scripts_Component_AItem__get_Root_40e9cf4
                                  (param_8,0), plVar2 != (long *)0x0)) {
      lVar4 = *plVar2;
      uVar5 = (ulong)*(ushort *)(lVar4 + 0x12a);
      if (uVar5 != 0) {
        piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        do {
          if (*(long *)(piVar6 + -2) == *(long *)puVar1) {
            puVar3 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
            goto LAB_017148f0;
          }
          uVar5 = uVar5 - 1;
          piVar6 = piVar6 + 4;
        } while (uVar5 != 0);
      }
      puVar3 = (undefined8 *)FUN_0131971c(plVar2,*(long *)puVar1,0);
LAB_017148f0:
      fVar8 = (float)(*(code *)*puVar3)(plVar2,puVar3[1]);
      fVar8 = fVar8 + 0.0;
      fVar12 = fVar12 + (float)*(int *)(param_8 + 0x48) + param_5;
      fVar10 = fVar12 - (param_5 * 0.5 + (float)*(int *)(param_8 + 0x48));
      fVar9 = (float)Modules_Infrastructure_Utils_GrandMath__RotateAround_3de2880
                               (fVar8,fVar10,param_3 + 0.0,fVar8,fVar12,param_3 + 0.0,0);
      if (cRam0000000005c244b8 == '\0') {
        FUN_012d0dc8(PTR_DAT_057d6f00);
        cRam0000000005c244b8 = '\x01';
      }
      fVar7 = (param_1 + fVar7) * 0.5 - (fVar8 + fVar9) * 0.5;
      fVar11 = (param_2 + fVar11) * 0.5 - (fVar10 + fVar12) * 0.5;
      if (*(int *)(*(long *)PTR_DAT_057d6f00 + 0xe0) == 0) {
        thunk_FUN_0130472c();
      }
      return SQRT(fVar7 * fVar7 + fVar11 * fVar11);
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

