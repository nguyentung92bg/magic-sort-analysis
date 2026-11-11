/* IL2CPP: Modules.Contexts.Home.Daily.Scripts.UI.DailyProgressBarController$$GetProgressBarDayXPosition
float Modules_Contexts_Home_Daily_Scripts_UI_DailyProgressBarController__GetProgressBarDayXPosition (Modules_Contexts_Home_Daily_Scripts_UI_DailyProgressBarController_o* __this, int32_t day, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Removing unreachable block (ram,0x03f21530) */
/* IL2CPP:
   Modules.Contexts.Home.Daily.Scripts.UI.DailyProgressBarController$$GetProgressBarDayXPosition
   float 
   Modules_Contexts_Home_Daily_Scripts_UI_DailyProgressBarController__GetProgressBarDayXPosition
   (Modules_Contexts_Home_Daily_Scripts_UI_DailyProgressBarController_o* __this, int32_t day, const
   MethodInfo* method); */

undefined1  [16]
Modules_Contexts_Home_Daily_Scripts_UI_DailyProgressBarController__GetProgressBarDayXPosition_3e212d0
          (long param_1,undefined4 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  undefined8 uVar12;
  int iVar13;
  long lVar14;
  float fVar15;
  float fVar16;
  float extraout_s0;
  undefined4 uVar18;
  undefined4 extraout_var;
  undefined8 extraout_var_00;
  undefined1 auVar17 [16];
  float fVar19;
  
  puVar1 = PTR_DAT_05764620;
  if ((bRam0000000005c3810c & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_0579f188);
    FUN_012d0dc8(PTR_DAT_057bd410);
    FUN_012d0dc8(PTR_DAT_05805db0);
    FUN_012d0dc8(PTR_DAT_05793300);
    FUN_012d0dc8(PTR_DAT_057c5200);
    FUN_012d0dc8(PTR_DAT_0576c200);
    FUN_012d0dc8(PTR_DAT_05780548);
    FUN_012d0dc8(PTR_DAT_057a1310);
    FUN_012d0dc8(PTR_DAT_05764620);
    bRam0000000005c3810c = 1;
  }
  lVar8 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
  if (lVar8 != 0) {
    System_Object___ctor_23dfe5c(lVar8,0);
    *(undefined4 *)(lVar8 + 0x10) = param_2;
    puVar7 = PTR_DAT_05805db0;
    puVar6 = PTR_DAT_057c5200;
    puVar5 = PTR_DAT_057bd410;
    puVar4 = PTR_DAT_057a1310;
    puVar3 = PTR_DAT_0579f188;
    puVar2 = PTR_DAT_05780548;
    puVar1 = PTR_DAT_0576c200;
    lVar14 = *(long *)(param_1 + 0x20);
    if (lVar14 != 0) {
      iVar13 = 0;
      while (iVar13 < *(int *)(lVar14 + 0x18)) {
        lVar14 = System_Collections_Generic_List_object___get_Item_21fc76c
                           (lVar14,iVar13,*(undefined8 *)puVar6);
        if (lVar14 == 0) goto LAB_03f2159c;
        if (*(int *)(lVar14 + 0x54) == *(int *)(lVar8 + 0x10)) {
          if (((*(long *)(param_1 + 0x20) != 0) &&
              (lVar8 = System_Collections_Generic_List_object___get_Item_21fc76c
                                 (*(long *)(param_1 + 0x20),iVar13,*(undefined8 *)puVar6),
              lVar8 != 0)) &&
             (lVar8 = UnityEngine_Component__get_transform_408b444(lVar8,0), lVar8 != 0)) {
            UnityEngine_Transform__get_localPosition_4092c40(lVar8,0);
            fVar16 = extraout_s0;
            uVar18 = extraout_var;
            uVar12 = extraout_var_00;
            goto LAB_03f2157c;
          }
          goto LAB_03f2159c;
        }
        lVar14 = *(long *)(param_1 + 0x20);
        iVar13 = iVar13 + 1;
        if (lVar14 == 0) goto LAB_03f2159c;
      }
      lVar9 = thunk_FUN_01320e48(*(undefined8 *)puVar7);
      if (lVar9 == 0) goto LAB_03f2159c;
      System_Func_object__bool____ctor_338137c(lVar9,lVar8,*(undefined8 *)puVar2,0);
      lVar14 = System_Linq_Enumerable__FirstOrDefault_object__24215ac
                         (lVar14,lVar9,*(undefined8 *)puVar3);
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_0130472c(*(long *)puVar1);
      }
      uVar10 = UnityEngine_Object__op_Equality_407f288(lVar14,0,0);
      if ((uVar10 & 1) != 0) {
        lVar14 = *(long *)(param_1 + 0x20);
        if (lVar14 == 0) goto LAB_03f2159c;
        lVar14 = System_Collections_Generic_List_object___get_Item_21fc76c
                           (lVar14,*(int *)(lVar14 + 0x18) + -1,*(undefined8 *)puVar6);
      }
      uVar12 = *(undefined8 *)(param_1 + 0x20);
      lVar9 = thunk_FUN_01320e48(*(undefined8 *)puVar7);
      if (lVar9 != 0) {
        System_Func_object__bool____ctor_338137c(lVar9,lVar8,*(undefined8 *)puVar4,0);
        lVar9 = System_Linq_Enumerable__LastOrDefault_object__24231ac
                          (uVar12,lVar9,*(undefined8 *)puVar5);
        if (((lVar14 != 0) &&
            (lVar11 = UnityEngine_Component__get_transform_408b444(lVar14,0), lVar11 != 0)) &&
           ((fVar15 = (float)UnityEngine_Transform__get_localPosition_4092c40(lVar11,0), lVar9 != 0
            && (lVar11 = UnityEngine_Component__get_transform_408b444(lVar9,0), lVar11 != 0)))) {
          fVar16 = (float)UnityEngine_Transform__get_localPosition_4092c40(lVar11,0);
          fVar19 = ((float)*(int *)(lVar8 + 0x10) - (float)*(int *)(lVar9 + 0x54)) /
                   (float)(*(int *)(lVar14 + 0x54) - *(int *)(lVar9 + 0x54));
          if (fVar19 < 0.0) {
            fVar19 = 0.0;
          }
          fVar16 = fVar16 + (fVar15 - fVar16) * fVar19;
          uVar18 = 0;
          uVar12 = 0;
LAB_03f2157c:
          auVar17._4_4_ = uVar18;
          auVar17._0_4_ = fVar16;
          auVar17._8_8_ = uVar12;
          return auVar17;
        }
      }
    }
  }
LAB_03f2159c:
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

