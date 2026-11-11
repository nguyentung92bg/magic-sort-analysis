/* IL2CPP: Modules.Contexts.Home.Journey.Scripts.UI.JourneyBackgroundItemLooper$$UpdateBackgroundItems
void Modules_Contexts_Home_Journey_Scripts_UI_JourneyBackgroundItemLooper__UpdateBackgroundItems (Modules_Contexts_Home_Journey_Scripts_UI_JourneyBackgroundItemLooper_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Home.Journey.Scripts.UI.JourneyBackgroundItemLooper$$UpdateBackgroundItems
   void Modules_Contexts_Home_Journey_Scripts_UI_JourneyBackgroundItemLooper__UpdateBackgroundItems
   (Modules_Contexts_Home_Journey_Scripts_UI_JourneyBackgroundItemLooper_o* __this, const
   MethodInfo* method); */

void Modules_Contexts_Home_Journey_Scripts_UI_JourneyBackgroundItemLooper__UpdateBackgroundItems_3a7c430
               (undefined1 param_1 [16],ulong param_2,long param_3)

{
  undefined4 uVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  uint uVar7;
  int iVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  float fVar17;
  ulong uVar12;
  
  if ((bRam0000000005c35ae7 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057ad170);
                    /* try { // try from 03b7c460 to 03c7c71f has its CatchHandler @ 03b7c460
                       catch() { ... } // from try @ 03b7c460 with catch @ 03b7c460
                       catch() { ... } // from try @ 03b7c7e4 with catch @ 03b7c460
                       catch() { ... } // from try @ 03b7c880 with catch @ 03b7c460
                       catch() { ... } // from try @ 03b7c918 with catch @ 03b7c460 */
    FUN_012d0dc8(PTR_DAT_0578c878);
    bRam0000000005c35ae7 = 1;
  }
  puVar2 = PTR_DAT_0578c878;
  if (*(long *)(param_3 + 0x20) != 0) {
    lVar3 = System_Collections_Generic_List_object___get_Item_21fc76c
                      (*(long *)(param_3 + 0x20),0,*(undefined8 *)PTR_DAT_0578c878);
    if (*(long *)(param_3 + 0x20) != 0) {
      lVar4 = System_Collections_Generic_List_object___get_Item_21fc76c
                        (*(long *)(param_3 + 0x20),0,*(undefined8 *)puVar2);
      lVar6 = *(long *)(param_3 + 0x20);
      if (lVar6 != 0) {
        iVar8 = 0;
        while (iVar8 < *(int *)(lVar6 + 0x18)) {
          lVar6 = System_Collections_Generic_List_object___get_Item_21fc76c
                            (lVar6,iVar8,*(undefined8 *)puVar2);
          if ((((lVar6 == 0) ||
               (lVar6 = UnityEngine_GameObject__get_transform_408e25c(lVar6,0), lVar6 == 0)) ||
              (UnityEngine_Transform__get_localPosition_4092c40(lVar6,0), lVar3 == 0)) ||
             (uVar12 = param_2, lVar6 = UnityEngine_GameObject__get_transform_408e25c(lVar3,0),
             lVar6 == 0)) goto LAB_03b7c7c4;
          UnityEngine_Transform__get_localPosition_4092c40(lVar6,0);
          if (*(long *)(param_3 + 0x20) == 0) goto LAB_03b7c7c4;
          uVar13 = uVar12;
          lVar5 = System_Collections_Generic_List_object___get_Item_21fc76c
                            (*(long *)(param_3 + 0x20),iVar8,*(undefined8 *)puVar2);
          if ((float)param_2 <= (float)uVar12) {
            if (((lVar5 == 0) ||
                (lVar6 = UnityEngine_GameObject__get_transform_408e25c(lVar5,0), lVar6 == 0)) ||
               ((UnityEngine_Transform__get_localPosition_4092c40(lVar6,0), lVar4 == 0 ||
                (uVar12 = uVar13, lVar6 = UnityEngine_GameObject__get_transform_408e25c(lVar4,0),
                lVar6 == 0)))) goto LAB_03b7c7c4;
            UnityEngine_Transform__get_localPosition_4092c40(lVar6,0);
            fVar11 = (float)uVar13;
            lVar5 = lVar3;
            uVar13 = uVar12;
            if (fVar11 < (float)uVar12) {
              if (*(long *)(param_3 + 0x20) == 0) goto LAB_03b7c7c4;
              lVar4 = System_Collections_Generic_List_object___get_Item_21fc76c
                                (*(long *)(param_3 + 0x20),iVar8,*(undefined8 *)puVar2);
              uVar13 = uVar12;
            }
          }
          lVar6 = *(long *)(param_3 + 0x20);
          iVar8 = iVar8 + 1;
          lVar3 = lVar5;
          param_2 = uVar13;
          if (lVar6 == 0) goto LAB_03b7c7c4;
        }
        if (((lVar4 != 0) &&
            (lVar6 = UnityEngine_GameObject__get_transform_408e25c(lVar4,0), lVar6 != 0)) &&
           ((UnityEngine_Transform__get_localPosition_4092c40(lVar6,0), lVar3 != 0 &&
            (uVar12 = param_2, lVar6 = UnityEngine_GameObject__get_transform_408e25c(lVar3,0),
            lVar6 != 0)))) {
          UnityEngine_Transform__get_localPosition_4092c40(lVar6,0);
          fVar11 = (float)uVar12;
          if (*(long *)(param_3 + 0x18) != 0) {
            fVar17 = *(float *)(*(long *)(param_3 + 0x18) + 0x54);
            fVar9 = *(float *)(param_3 + 0x3c) - fVar17;
            fVar10 = 0.0;
            if ((fVar9 != 0.0) && (fVar10 = *(float *)(param_3 + 0x2c), fVar9 < 0.0)) {
              fVar10 = -fVar10;
            }
            if (fVar11 <= fVar10 - fVar17) {
              lVar6 = UnityEngine_GameObject__get_transform_408e25c(lVar4,0);
              lVar3 = UnityEngine_GameObject__get_transform_408e25c(lVar3,0);
              if ((lVar3 == 0) ||
                 (fVar9 = (float)UnityEngine_Transform__get_localPosition_4092c40(lVar3,0),
                 lVar6 == 0)) goto LAB_03b7c7c4;
              fVar9 = fVar9 + 0.0;
              fVar11 = fVar11 + *(float *)(param_3 + 0x28);
LAB_03b7c694:
              uVar12 = (ulong)(uint)fVar11;
              UnityEngine_Transform__set_localPosition_4092ce0(fVar9,lVar6,0);
            }
            else if (fVar10 - fVar17 <= (float)param_2) {
              lVar6 = UnityEngine_GameObject__get_transform_408e25c(lVar3,0);
              lVar3 = UnityEngine_GameObject__get_transform_408e25c(lVar4,0);
              if ((lVar3 != 0) &&
                 (fVar9 = (float)UnityEngine_Transform__get_localPosition_4092c40(lVar3,0),
                 lVar6 != 0)) {
                fVar11 = fVar11 - *(float *)(param_3 + 0x28);
                goto LAB_03b7c694;
              }
              goto LAB_03b7c7c4;
            }
            if (((*(long *)(param_3 + 0x20) != 0) &&
                (lVar3 = System_Collections_Generic_List_object___get_Item_21fc76c
                                   (*(long *)(param_3 + 0x20),0,*(undefined8 *)puVar2), lVar3 != 0))
               && (lVar3 = UnityEngine_GameObject__get_transform_408e25c(lVar3,0), lVar3 != 0)) {
              UnityEngine_Transform__get_localPosition_4092c40(lVar3,0);
              if (((*(long *)(param_3 + 0x20) != 0) &&
                  (uVar13 = uVar12,
                  lVar3 = System_Collections_Generic_List_object___get_Item_21fc76c
                                    (*(long *)(param_3 + 0x20),0,*(undefined8 *)puVar2), lVar3 != 0)
                  ) && (lVar3 = UnityEngine_GameObject__get_transform_408e25c(lVar3,0), lVar3 != 0))
              {
                UnityEngine_Transform__get_localPosition_4092c40(lVar3,0);
                lVar3 = *(long *)(param_3 + 0x20);
                if (lVar3 != 0) {
                  iVar8 = 0;
                  uVar14 = uVar13;
                  goto LAB_03b7c710;
                }
              }
            }
          }
        }
      }
    }
  }
LAB_03b7c7c4:
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
LAB_03b7c710:
  if (*(int *)(lVar3 + 0x18) <= iVar8) {
    if (((float)uVar13 <= -fVar17) && (-fVar17 <= (float)uVar12)) {
                    /* try { // try from 03b7c7dc to 03c7c7e3 has its CatchHandler @ 03b7c890 */
                    /* try { // try from 03b7c7e4 to 03c7c87b has its CatchHandler @ 03b7c460 */
      return;
    }
    if ((bRam0000000005c35ae6 & 1) == 0) {
      FUN_012d0dc8(PTR_DAT_057ad170);
      FUN_012d0dc8(PTR_DAT_0578c878);
      bRam0000000005c35ae6 = 1;
    }
    puVar2 = PTR_DAT_0578c878;
    if ((*(long *)(param_3 + 0x18) == 0) || (lVar3 = *(long *)(param_3 + 0x20), lVar3 == 0))
    goto LAB_03b7c3b0;
    fVar11 = -*(float *)(*(long *)(param_3 + 0x18) + 0x54);
    uVar7 = 0;
    fVar9 = fVar11 - *(float *)(param_3 + 0x28);
    goto LAB_03b7c30c;
  }
                    /* try { // try from 03b7c720 to 03c7c747 has its CatchHandler @ 03b7c894 */
  lVar3 = System_Collections_Generic_List_object___get_Item_21fc76c
                    (lVar3,iVar8,*(undefined8 *)puVar2);
  if ((lVar3 == 0) || (lVar3 = UnityEngine_GameObject__get_transform_408e25c(lVar3,0), lVar3 == 0))
  goto LAB_03b7c7c4;
  UnityEngine_Transform__get_localPosition_4092c40(lVar3,0);
                    /* try { // try from 03b7c760 to 03c7c7c3 has its CatchHandler @ 03b7c898 */
  if ((*(long *)(param_3 + 0x20) == 0) ||
     ((uVar15 = uVar14,
      lVar3 = System_Collections_Generic_List_object___get_Item_21fc76c
                        (*(long *)(param_3 + 0x20),iVar8,*(undefined8 *)puVar2), lVar3 == 0 ||
      (lVar3 = UnityEngine_GameObject__get_transform_408e25c(lVar3,0), lVar3 == 0))))
  goto LAB_03b7c7c4;
  UnityEngine_Transform__get_localPosition_4092c40(lVar3,0);
  uVar16 = uVar15;
  if (((float)uVar14 <= (float)uVar12) && (uVar16 = uVar12, (float)uVar15 < (float)uVar13)) {
    if (((*(long *)(param_3 + 0x20) == 0) ||
        (lVar3 = System_Collections_Generic_List_object___get_Item_21fc76c
                           (*(long *)(param_3 + 0x20),iVar8,*(undefined8 *)puVar2), lVar3 == 0)) ||
       (lVar3 = UnityEngine_GameObject__get_transform_408e25c(lVar3,0), lVar3 == 0))
    goto LAB_03b7c7c4;
    UnityEngine_Transform__get_localPosition_4092c40(lVar3,0);
    uVar13 = uVar15;
  }
  lVar3 = *(long *)(param_3 + 0x20);
  iVar8 = iVar8 + 1;
  uVar14 = uVar15;
  uVar12 = uVar16;
  if (lVar3 == 0) goto LAB_03b7c7c4;
  goto LAB_03b7c710;
  while( true ) {
    lVar3 = System_Collections_Generic_List_object___get_Item_21fc76c
                      (lVar3,uVar7,*(undefined8 *)puVar2);
    if (lVar3 == 0) break;
    lVar3 = UnityEngine_GameObject__get_transform_408e25c(lVar3,0);
    if ((uVar7 & 1) == 0) {
      if (lVar3 == 0) break;
      UnityEngine_Transform__set_localPosition_4092ce0(0,fVar11,0,lVar3,0);
      fVar11 = fVar11 + *(float *)(param_3 + 0x28);
    }
    else {
      if (lVar3 == 0) break;
      UnityEngine_Transform__set_localPosition_4092ce0(0,fVar9,0,lVar3,0);
      fVar9 = fVar9 - *(float *)(param_3 + 0x28);
    }
    lVar3 = *(long *)(param_3 + 0x20);
    uVar7 = uVar7 + 1;
    if (lVar3 == 0) break;
LAB_03b7c30c:
    if (*(int *)(lVar3 + 0x18) <= (int)uVar7) {
      lVar3 = *(long *)(param_3 + 0x18);
      if (lVar3 != 0) {
        uVar1 = *(undefined4 *)(lVar3 + 0x58);
        *(undefined8 *)(param_3 + 0x30) = *(undefined8 *)(lVar3 + 0x50);
        *(undefined4 *)(param_3 + 0x38) = uVar1;
        return;
      }
      break;
    }
  }
LAB_03b7c3b0:
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

