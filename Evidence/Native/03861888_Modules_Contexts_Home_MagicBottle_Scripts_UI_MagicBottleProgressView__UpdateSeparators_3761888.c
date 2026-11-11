/* IL2CPP: Modules.Contexts.Home.MagicBottle.Scripts.UI.MagicBottleProgressView$$UpdateSeparators
void Modules_Contexts_Home_MagicBottle_Scripts_UI_MagicBottleProgressView__UpdateSeparators (Modules_Contexts_Home_MagicBottle_Scripts_UI_MagicBottleProgressView_o* __this, int32_t currentProgress, int32_t maxProgress, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Removing unreachable block (ram,0x0386196c) */
/* IL2CPP: Modules.Contexts.Home.MagicBottle.Scripts.UI.MagicBottleProgressView$$UpdateSeparators
   void Modules_Contexts_Home_MagicBottle_Scripts_UI_MagicBottleProgressView__UpdateSeparators
   (Modules_Contexts_Home_MagicBottle_Scripts_UI_MagicBottleProgressView_o* __this, int32_t
   currentProgress, int32_t maxProgress, const MethodInfo* method); */

void Modules_Contexts_Home_MagicBottle_Scripts_UI_MagicBottleProgressView__UpdateSeparators_3761888
               (undefined1 param_1 [16],ulong param_2,ulong param_3,long param_4,int param_5,
               int param_6)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  undefined4 *puVar7;
  long lVar8;
  long *plVar9;
  long lVar10;
  undefined8 uVar11;
  int iVar12;
  float fVar13;
  float fVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  
  if ((bRam0000000005c33bcd & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_05809a08);
    FUN_012d0dc8(PTR_DAT_05769f00);
    FUN_012d0dc8(PTR_DAT_0576c200);
    bRam0000000005c33bcd = 1;
  }
  Modules_Contexts_Home_MagicBottle_Scripts_UI_MagicBottleProgressView__ClearExistingSeparators_37614f0
            (param_4);
  puVar3 = PTR_DAT_05809a08;
  puVar2 = PTR_DAT_057f4aa8;
  if (0 < param_6) {
                    /* try { // try from 03861918 to 039619ef has its CatchHandler @ 03861918
                       catch() { ... } // from try @ 03861918 with catch @ 03861918
                       catch() { ... } // from try @ 03861a00 with catch @ 03861918
                       catch() { ... } // from try @ 03861a48 with catch @ 03861918
                       catch() { ... } // from try @ 03861a80 with catch @ 03861918 */
    iVar12 = 1;
    do {
      fVar19 = (float)param_3;
      fVar17 = (float)param_2;
      if (*(long *)(param_4 + 0x18) == 0) {
LAB_03861b00:
                    /* WARNING: Subroutine does not return */
        FUN_012d0ef0();
      }
      fVar13 = (float)UnityEngine_Transform__get_position_4092b08(*(long *)(param_4 + 0x18),0);
      if (*(long *)(param_4 + 0x20) == 0) goto LAB_03861b00;
      fVar21 = (float)iVar12 / (float)param_6;
      fVar20 = fVar19;
      fVar18 = (float)param_6;
      fVar14 = (float)UnityEngine_Transform__get_position_4092b08(*(long *)(param_4 + 0x20),0);
      if (fVar21 < 0.0) {
        fVar21 = 0.0;
      }
      lVar5 = 0x38;
      if (iVar12 <= param_5) {
        lVar5 = 0x30;
      }
      uVar11 = *(undefined8 *)(param_4 + lVar5);
      if (cRam0000000005c25812 == '\0') {
        FUN_012d0dc8(puVar2);
        cRam0000000005c25812 = '\x01';
      }
      puVar7 = *(undefined4 **)(*(long *)puVar2 + 0xb8);
      param_2 = (ulong)(uint)(fVar17 + fVar21 * (fVar18 - fVar17));
      param_3 = (ulong)(uint)(fVar19 + fVar21 * (fVar20 - fVar19));
      uVar15 = *puVar7;
      uVar23 = puVar7[3];
      uVar16 = puVar7[1];
      uVar22 = puVar7[2];
      uVar4 = UnityEngine_Component__get_transform_408b444(param_4,0);
                    /* try { // try from 038619f0 to 039619ff has its CatchHandler @ 03861a2c */
                    /* try { // try from 03861a00 to 03961a43 has its CatchHandler @ 03861918 */
      if (*(int *)(*(long *)PTR_DAT_0576c200 + 0xe0) == 0) {
        thunk_FUN_0130472c(*(long *)PTR_DAT_0576c200);
      }
                    /* catch(type#1 @ 054cbd58) { ... } // from try @ 038619f0 with catch @ 03861a2c
                        */
      lVar5 = UnityEngine_Object__Instantiate_object__2aacb38
                        (fVar13 + fVar21 * (fVar14 - fVar13),param_2,param_3,uVar15,uVar16,uVar22,
                         uVar23,uVar11,uVar4,*(undefined8 *)PTR_DAT_05769f00);
                    /* try { // try from 03861a44 to 03961a47 has its CatchHandler @ 03861a6c */
                    /* try { // try from 03861a48 to 03961a6f has its CatchHandler @ 03861918 */
      if ((lVar5 == 0) ||
         (lVar6 = UnityEngine_GameObject__get_gameObject_408e764(lVar5,0), lVar6 == 0))
      goto LAB_03861b00;
      UnityEngine_GameObject__SetActive_408e318(lVar6,1,0);
      lVar6 = *(long *)(param_4 + 0x58);
      if (lVar6 == 0) goto LAB_03861b00;
      lVar8 = *(long *)(lVar6 + 0x10);
                    /* catch() { ... } // from try @ 03861a44 with catch @ 03861a6c */
      lVar10 = *(long *)puVar3;
                    /* try { // try from 03861a70 to 03961a7f has its CatchHandler @ 03861a94 */
      *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
      if (lVar8 == 0) goto LAB_03861b00;
      uVar1 = *(uint *)(lVar6 + 0x18);
                    /* try { // try from 03861a80 to 03961a8b has its CatchHandler @ 03861918 */
      if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                    /* try { // try from 03861a8c to 03961a93 has its CatchHandler @ 03861a94 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 03861a70 with catch @ 03861a94
                       catch(type#2 @ 00000000) { ... } // from try @ 03861a8c with catch @ 03861a94
                        */
        *(uint *)(lVar6 + 0x18) = uVar1 + 1;
        plVar9 = (long *)(lVar8 + (long)(int)uVar1 * 8 + 0x20);
        *plVar9 = lVar5;
        FUN_012d0d74(plVar9,lVar5);
      }
      else {
        (**(code **)(*(long *)(*(long *)(*(long *)(lVar10 + 0x20) + 0xc0) + 0x58) + 8))(lVar6,lVar5)
        ;
      }
      iVar12 = iVar12 + 1;
    } while (iVar12 <= param_6);
  }
  return;
}

