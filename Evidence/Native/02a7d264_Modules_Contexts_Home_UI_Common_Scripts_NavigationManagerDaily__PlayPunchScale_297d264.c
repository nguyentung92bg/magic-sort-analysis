/* IL2CPP: Modules.Contexts.Home.UI.Common.Scripts.NavigationManagerDaily$$PlayPunchScale
void Modules_Contexts_Home_UI_Common_Scripts_NavigationManagerDaily__PlayPunchScale (Modules_Contexts_Home_UI_Common_Scripts_NavigationManagerDaily_o* __this, System_Collections_Generic_List_Transform__o* targets, bool playAnimation, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Home.UI.Common.Scripts.NavigationManagerDaily$$PlayPunchScale
   void Modules_Contexts_Home_UI_Common_Scripts_NavigationManagerDaily__PlayPunchScale
   (Modules_Contexts_Home_UI_Common_Scripts_NavigationManagerDaily_o* __this,
   System_Collections_Generic_List_Transform__o* targets, bool playAnimation, const MethodInfo*
   method); */

void Modules_Contexts_Home_UI_Common_Scripts_NavigationManagerDaily__PlayPunchScale_297d264
               (long param_1,long param_2,ulong param_3)

{
  int iVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  ulong uVar9;
  long lVar10;
  undefined8 uVar11;
  long lVar12;
  undefined8 *puVar13;
  long lVar14;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  long lStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  long lStack_90;
  undefined8 uStack_80;
  undefined8 uStack_78;
  long lStack_70;
  
  if ((bRam0000000005c2d73e & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057f16e8);
    FUN_012d0dc8(PTR_DAT_057ae688);
    FUN_012d0dc8(PTR_DAT_057a57e0);
    FUN_012d0dc8(PTR_DAT_0575a3c0);
    FUN_012d0dc8(PTR_DAT_057a7e98);
    FUN_012d0dc8(PTR_DAT_057e60f0);
    FUN_012d0dc8(PTR_DAT_05796070);
    FUN_012d0dc8(PTR_DAT_05780bb0);
    FUN_012d0dc8(PTR_DAT_057651f0);
    FUN_012d0dc8(PTR_DAT_057f4770);
    bRam0000000005c2d73e = 1;
  }
  puVar8 = PTR_DAT_057f16e8;
  puVar7 = PTR_DAT_057ae688;
  puVar6 = PTR_DAT_057a57e0;
  puVar5 = PTR_DAT_05796070;
  puVar4 = PTR_DAT_057651f0;
  puVar3 = PTR_DAT_0575a3c0;
  uStack_78 = 0;
  lStack_70 = 0;
  uStack_80 = 0;
  uStack_98 = 0;
  lStack_90 = 0;
  uStack_a0 = 0;
  if (*(long *)(param_1 + 0x58) != 0) {
    System_Collections_Generic_List_object___GetEnumerator_21fd5c8
              (&uStack_b8,*(long *)(param_1 + 0x58),*(undefined8 *)PTR_DAT_057f4770);
    uStack_78 = uStack_b0;
    uStack_80 = uStack_b8;
    lStack_70 = lStack_a8;
    while (uVar9 = System_Collections_Generic_List_Enumerator_object___MoveNext_3ea89a0
                             (&uStack_80,*(undefined8 *)puVar6), (uVar9 & 1) != 0) {
      if (lStack_70 != 0) {
        DG_Tweening_TweenExtensions__Kill_1edd6a4(lStack_70,0,0);
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose_3ea899c
              (&uStack_80,*(undefined8 *)puVar8);
    if (param_2 != 0) {
      System_Collections_Generic_List_object___GetEnumerator_21fd5c8
                (&uStack_b8,param_2,*(undefined8 *)puVar4);
      puVar6 = PTR_DAT_05805c10;
      uStack_98 = uStack_b0;
      uStack_a0 = uStack_b8;
      lStack_90 = lStack_a8;
      while (uVar9 = System_Collections_Generic_List_Enumerator_object___MoveNext_3ea89a0
                               (&uStack_a0,*(undefined8 *)puVar3), (uVar9 & 1) != 0) {
        if (lStack_90 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_012d0ef0();
        }
        lVar10 = UnityEngine_Component__get_transform_408b444(lStack_90,0);
        if (cRam0000000005c230a9 == '\0') {
          FUN_012d0dc8(puVar6);
          cRam0000000005c230a9 = '\x01';
        }
        if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_012d0ef0();
        }
        lVar12 = *(long *)(*(long *)puVar6 + 0xb8);
        UnityEngine_Transform__set_localScale_40932d0
                  (*(undefined4 *)(lVar12 + 0xc),*(undefined4 *)(lVar12 + 0x10),
                   *(undefined4 *)(lVar12 + 0x14),lVar10,0);
      }
      System_Collections_Generic_List_Enumerator_object___Dispose_3ea899c
                (&uStack_a0,*(undefined8 *)puVar7);
      if ((param_3 & 1) != 0) {
        lVar10 = *(long *)(param_1 + 0x58);
        if (lVar10 == 0) goto LAB_02a7d580;
        iVar1 = *(int *)(lVar10 + 0x18);
        *(undefined4 *)(lVar10 + 0x18) = 0;
        *(int *)(lVar10 + 0x1c) = *(int *)(lVar10 + 0x1c) + 1;
        if (0 < iVar1) {
          System_Array__Clear_26a6bec(*(undefined8 *)(lVar10 + 0x10),0,iVar1,0);
        }
        System_Collections_Generic_List_object___GetEnumerator_21fd5c8
                  (&uStack_b8,param_2,*(undefined8 *)puVar4);
        uStack_98 = uStack_b0;
        uStack_a0 = uStack_b8;
        lStack_90 = lStack_a8;
        while (uVar9 = System_Collections_Generic_List_Enumerator_object___MoveNext_3ea89a0
                                 (&uStack_a0,*(undefined8 *)puVar3), (uVar9 & 1) != 0) {
          lVar10 = *(long *)(param_1 + 0x18);
          if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_012d0ef0();
          }
          uVar11 = DG_Tweening_ShortcutExtensions__DOPunchScale_1ee71cc
                             (*(undefined4 *)(lVar10 + 0x30),*(undefined4 *)(lVar10 + 0x34),
                              *(undefined4 *)(lVar10 + 0x38),*(undefined4 *)(lVar10 + 0x3c),
                              *(undefined4 *)(lVar10 + 0x44),lStack_90,
                              *(undefined4 *)(lVar10 + 0x40),0);
          lVar10 = *(long *)(param_1 + 0x58);
          if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_012d0ef0();
          }
          lVar12 = *(long *)(lVar10 + 0x10);
          lVar14 = *(long *)puVar5;
          *(int *)(lVar10 + 0x1c) = *(int *)(lVar10 + 0x1c) + 1;
          if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_012d0ef0();
          }
          uVar2 = *(uint *)(lVar10 + 0x18);
          if (uVar2 < *(uint *)(lVar12 + 0x18)) {
            *(uint *)(lVar10 + 0x18) = uVar2 + 1;
            puVar13 = (undefined8 *)(lVar12 + (long)(int)uVar2 * 8 + 0x20);
            *puVar13 = uVar11;
            FUN_012d0d74(puVar13);
          }
          else {
            (**(code **)(*(long *)(*(long *)(*(long *)(lVar14 + 0x20) + 0xc0) + 0x58) + 8))();
          }
        }
        System_Collections_Generic_List_Enumerator_object___Dispose_3ea899c
                  (&uStack_a0,*(undefined8 *)puVar7);
      }
      return;
    }
  }
LAB_02a7d580:
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

