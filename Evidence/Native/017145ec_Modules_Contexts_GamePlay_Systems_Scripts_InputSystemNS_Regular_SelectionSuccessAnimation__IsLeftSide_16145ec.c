/* IL2CPP: Modules.Contexts.GamePlay.Systems.Scripts.InputSystemNS.Regular.SelectionSuccessAnimation$$IsLeftSide
bool Modules_Contexts_GamePlay_Systems_Scripts_InputSystemNS_Regular_SelectionSuccessAnimation__IsLeftSide (Modules_Contexts_GamePlay_Systems_Scripts_InputSystemNS_Regular_SelectionSuccessAnimation_o* __this, Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem_o* bottle1, Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem_o* bottle2, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.GamePlay.Systems.Scripts.InputSystemNS.Regular.SelectionSuccessAnimation$$IsLeftSide
   bool 
   Modules_Contexts_GamePlay_Systems_Scripts_InputSystemNS_Regular_SelectionSuccessAnimation__IsLeftSide
   (Modules_Contexts_GamePlay_Systems_Scripts_InputSystemNS_Regular_SelectionSuccessAnimation_o*
   __this, Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem_o* bottle1,
   Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem_o* bottle2, const MethodInfo*
   method); */

bool Modules_Contexts_GamePlay_Systems_Scripts_InputSystemNS_Regular_SelectionSuccessAnimation__IsLeftSide_16145ec
               (undefined8 param_1,long param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  bool bVar3;
  long *plVar4;
  undefined8 *puVar5;
  long lVar6;
  ulong uVar7;
  int *piVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  
  if ((bRam0000000005c24497 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_05793328);
    FUN_012d0dc8(PTR_DAT_0576aae0);
    FUN_012d0dc8(PTR_DAT_0575a2d8);
    bRam0000000005c24497 = 1;
  }
  if ((param_2 != 0) &&
     (plVar4 = (long *)Modules_Infrastructure_Common_Scripts_Component_AItem__get_Root_40e9cf4
                                 (param_2,0), puVar1 = PTR_DAT_0575a2d8, plVar4 != (long *)0x0)) {
    lVar6 = *plVar4;
    uVar7 = (ulong)*(ushort *)(lVar6 + 0x12a);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_0575a2d8) {
          puVar5 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_017146a4;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar5 = (undefined8 *)FUN_0131971c(plVar4,*(long *)PTR_DAT_0575a2d8,0);
LAB_017146a4:
    fVar9 = (float)(*(code *)*puVar5)(plVar4,puVar5[1]);
    if ((param_3 != 0) &&
       (plVar4 = (long *)Modules_Infrastructure_Common_Scripts_Component_AItem__get_Root_40e9cf4
                                   (param_3,0), puVar2 = PTR_DAT_0576aae0, plVar4 != (long *)0x0)) {
      lVar6 = *plVar4;
      uVar7 = (ulong)*(ushort *)(lVar6 + 0x12a);
      if (uVar7 != 0) {
        piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == *(long *)puVar1) {
                    /* catch(type#1 @ 054cbd58) { ... } // from try @ 01714464 with catch @ 0171471c
                        */
            puVar5 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
            goto LAB_01714720;
          }
          uVar7 = uVar7 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar7 != 0);
      }
      puVar5 = (undefined8 *)FUN_0131971c(plVar4,*(long *)puVar1,0);
LAB_01714720:
                    /* catch(type#1 @ 054cbd58) { ... } // from try @ 01714468 with catch @ 01714720
                        */
      fVar10 = (float)(*(code *)*puVar5)(plVar4,puVar5[1]);
                    /* try { // try from 01714738 to 0181474f has its CatchHandler @ 017147c4 */
                    /* try { // try from 01714750 to 018147b3 has its CatchHandler @ 01714388 */
      if (((**(long **)(*(long *)puVar2 + 0xb8) != 0) &&
          (lVar6 = *(long *)(**(long **)(*(long *)puVar2 + 0xb8) + 0x18), lVar6 != 0)) &&
         (lVar6 = Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                            (lVar6,*(undefined8 *)PTR_DAT_05793328), lVar6 != 0)) {
        fVar11 = (float)Modules_Infrastructure_UI_Common_Scripts_ViewUtils__GetViewSize_4003688
                                  (*(undefined8 *)(lVar6 + 0x38),0);
        if (fVar10 <= fVar9) {
          bVar3 = fVar11 * 0.5 < fVar10 + 3.0;
        }
        else {
          bVar3 = fVar11 * -0.5 <= fVar10 + -3.0;
        }
        return bVar3;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 017147b4 to 018147c3 has its CatchHandler @ 017147c4 */
  FUN_012d0ef0();
}

