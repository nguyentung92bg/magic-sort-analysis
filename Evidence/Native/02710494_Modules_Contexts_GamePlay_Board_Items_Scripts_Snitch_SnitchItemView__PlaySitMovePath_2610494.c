/* IL2CPP: Modules.Contexts.GamePlay.Board.Items.Scripts.Snitch.SnitchItemView$$PlaySitMovePath
DG_Tweening_Tween_o* Modules_Contexts_GamePlay_Board_Items_Scripts_Snitch_SnitchItemView__PlaySitMovePath (Modules_Contexts_GamePlay_Board_Items_Scripts_Snitch_SnitchItemView_o* __this, UnityEngine_Vector3_o targetPosition, int32_t snitchIndex, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.GamePlay.Board.Items.Scripts.Snitch.SnitchItemView$$PlaySitMovePath
   DG_Tweening_Tween_o*
   Modules_Contexts_GamePlay_Board_Items_Scripts_Snitch_SnitchItemView__PlaySitMovePath
   (Modules_Contexts_GamePlay_Board_Items_Scripts_Snitch_SnitchItemView_o* __this,
   UnityEngine_Vector3_o targetPosition, int32_t snitchIndex, const MethodInfo* method); */

void Modules_Contexts_GamePlay_Board_Items_Scripts_Snitch_SnitchItemView__PlaySitMovePath_2610494
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,int param_5)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  bool bVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 in_x7;
  long lVar7;
  float fVar8;
  undefined8 uVar9;
  undefined4 uVar10;
  float fVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined4 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined4 uStack_68;
  
  if ((bRam0000000005c2ba08 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057dc5e0);
    FUN_012d0dc8(PTR_DAT_057ccae0);
    bRam0000000005c2ba08 = 1;
  }
  puVar3 = PTR_DAT_057dc5e0;
  lVar7 = *(long *)(param_4 + 0x38);
  if (lVar7 != 0) {
    bVar4 = param_5 != 0;
    lVar1 = 0x164;
    if (bVar4) {
      lVar1 = 0x170;
    }
    lVar2 = 0x160;
    if (bVar4) {
      lVar2 = 0x16c;
    }
    fVar11 = *(float *)(lVar7 + lVar2);
    uVar10 = *(undefined4 *)(lVar7 + lVar1);
    lVar1 = 0x168;
    if (bVar4) {
      lVar1 = 0x174;
    }
    uVar12 = *(undefined4 *)(lVar7 + lVar1);
    fVar8 = 1.0;
    if (fVar11 <= (float)param_1) {
      fVar8 = -1.0;
    }
    fVar8 = fVar8 * *(float *)(lVar7 + 500);
    uVar15 = 0;
    uVar14 = 0;
    uVar13 = 0;
    uVar5 = Modules_Infrastructure_Utils_BezierUtils__Get2NodeBezierControlPointsXYConfigurable_3de0b30
                      (fVar11,uVar10,uVar12,param_1,param_2,param_3,0);
    uVar9 = Modules_Contexts_GamePlay_Board_Items_Scripts_Snitch_SnitchItemView__GetSnitchSitDynamicDuration_260f2e8
                      (fVar11,uVar10,uVar12,param_1,param_2,param_3,param_4);
    uVar6 = UnityEngine_Component__get_transform_408b444(param_4,0);
    uStack_78 = 0;
    uStack_70 = 0;
    uStack_68 = 0;
    System_Nullable_Color____ctor_2037044
              (0x3f800000,0x3f800000,0x3f800000,0x3f800000,&uStack_78,*(undefined8 *)puVar3);
    uStack_88 = uStack_70;
    uStack_90 = uStack_78;
    uStack_80 = uStack_68;
    uVar5 = DG_Tweening_ShortcutExtensions__DOPath_1ee9134
                      (uVar9,uVar6,uVar5,2,3,0x23,&uStack_90,0,in_x7,uVar13,uVar14,fVar8,uVar15);
    if (*(long *)(param_4 + 0x38) != 0) {
      DG_Tweening_TweenSettingsExtensions__SetEase_object__2450be4
                (uVar5,*(undefined8 *)(*(long *)(param_4 + 0x38) + 0x200),
                 *(undefined8 *)PTR_DAT_057ccae0);
                    /* try { // try from 02710644 to 02810763 has its CatchHandler @ 02710644
                       catch() { ... } // from try @ 02710644 with catch @ 02710644
                       catch() { ... } // from try @ 02710844 with catch @ 02710644
                       catch() { ... } // from try @ 02710910 with catch @ 02710644
                       catch() { ... } // from try @ 02710918 with catch @ 02710644
                       catch() { ... } // from try @ 027109b4 with catch @ 02710644 */
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

