/* IL2CPP: Modules.Contexts.Home.UI.Profile.Scripts.ProfileFrameSelectionContainer$$Initialize
void Modules_Contexts_Home_UI_Profile_Scripts_ProfileFrameSelectionContainer__Initialize (Modules_Contexts_Home_UI_Profile_Scripts_ProfileFrameSelectionContainer_o* __this, System_Collections_Generic_List_string__o* allFrameIds, Modules_Contexts_Application_Player_Scripts_ProfileFrameInfo_o* activeFrameInfo, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Home.UI.Profile.Scripts.ProfileFrameSelectionContainer$$Initialize
   void Modules_Contexts_Home_UI_Profile_Scripts_ProfileFrameSelectionContainer__Initialize
   (Modules_Contexts_Home_UI_Profile_Scripts_ProfileFrameSelectionContainer_o* __this,
   System_Collections_Generic_List_string__o* allFrameIds,
   Modules_Contexts_Application_Player_Scripts_ProfileFrameInfo_o* activeFrameInfo, const
   MethodInfo* method); */

void Modules_Contexts_Home_UI_Profile_Scripts_ProfileFrameSelectionContainer__Initialize_29879e4
               (long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  uint uVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  undefined8 uVar11;
  undefined8 *puVar12;
  long lVar13;
  long *plVar14;
  int iVar15;
  undefined8 uStack_98;
  undefined8 uStack_90;
  long lStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  long lStack_70;
  
  puVar2 = PTR_DAT_05778c18;
  if ((bRam0000000005c2d7b3 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057dc218);
    FUN_012d0dc8(PTR_DAT_0576aae0);
    FUN_012d0dc8(PTR_DAT_057dd380);
    FUN_012d0dc8(PTR_DAT_057d3930);
    FUN_012d0dc8(PTR_DAT_05814400);
    FUN_012d0dc8(PTR_DAT_05801700);
    FUN_012d0dc8(PTR_DAT_05771d70);
    FUN_012d0dc8(PTR_DAT_057ec898);
    FUN_012d0dc8(PTR_DAT_05766950);
    FUN_012d0dc8(PTR_DAT_057dbb00);
    FUN_012d0dc8(PTR_DAT_0581b040);
    FUN_012d0dc8(PTR_DAT_05778c18);
    bRam0000000005c2d7b3 = 1;
  }
  uStack_78 = 0;
  lStack_70 = 0;
  uStack_80 = 0;
  *(undefined8 *)(param_1 + 0x28) = param_2;
  FUN_012d0d74((undefined8 *)(param_1 + 0x28),param_2);
  *(undefined8 *)(param_1 + 0x20) = param_3;
  FUN_012d0d74((undefined8 *)(param_1 + 0x20),param_3);
  lVar8 = thunk_FUN_01320e48(*(undefined8 *)puVar2);
  if (lVar8 != 0) {
    System_Collections_Generic_List_object____ctor_21fc1fc(lVar8,*(undefined8 *)PTR_DAT_05766950);
    plVar14 = (long *)(param_1 + 0x30);
    *plVar14 = lVar8;
    FUN_012d0d74(plVar14,lVar8);
    puVar6 = PTR_DAT_0581b040;
    puVar2 = PTR_DAT_05801700;
    if (*(long *)(param_1 + 0x28) != 0) {
      if (*(int *)(*(long *)(param_1 + 0x28) + 0x18) < 1) {
        iVar15 = 0;
      }
      else {
        lVar8 = Modules_Contexts_Application_Player_Scripts_ProfileFrameInfo__get_Default_1379f20(0)
        ;
        if ((((*(long *)(param_1 + 0x18) == 0) ||
             (lVar9 = System_Collections_Generic_List_object___get_Item_21fc76c
                                (*(long *)(param_1 + 0x18),0,*(undefined8 *)puVar6), lVar9 == 0)) ||
            (Modules_Contexts_Home_UI_Profile_Scripts_ProfileFrameSpriteSelectionFrame__Initialize_2989f80
                       (lVar9,lVar8,0), lVar8 == 0)) || (lVar9 = *plVar14, lVar9 == 0))
        goto LAB_02a87dd0;
        uVar11 = *(undefined8 *)(lVar8 + 0x10);
        lVar8 = *(long *)(lVar9 + 0x10);
        lVar13 = *(long *)puVar2;
        *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
        if (lVar8 == 0) goto LAB_02a87dd0;
        uVar7 = *(uint *)(lVar9 + 0x18);
        if (uVar7 < *(uint *)(lVar8 + 0x18)) {
          *(uint *)(lVar9 + 0x18) = uVar7 + 1;
          puVar12 = (undefined8 *)(lVar8 + (long)(int)uVar7 * 8 + 0x20);
          *puVar12 = uVar11;
          FUN_012d0d74(puVar12);
        }
        else {
          (**(code **)(*(long *)(*(long *)(*(long *)(lVar13 + 0x20) + 0xc0) + 0x58) + 8))();
        }
        iVar15 = 1;
      }
      lVar8 = Modules_Contexts_Home_UI_Profile_Scripts_ProfileFrameSelectionContainer__GetPlayerFrames_298a050
                        ();
      puVar5 = PTR_DAT_057dd380;
      puVar4 = PTR_DAT_057dc218;
      puVar3 = PTR_DAT_057d3930;
      puVar1 = PTR_DAT_0576aae0;
      if (lVar8 != 0) {
        System_Collections_Generic_List_object___GetEnumerator_21fd5c8
                  (&uStack_98,lVar8,*(undefined8 *)PTR_DAT_057ec898);
        uStack_78 = uStack_90;
        uStack_80 = uStack_98;
        lStack_70 = lStack_88;
        while (uVar10 = System_Collections_Generic_List_Enumerator_object___MoveNext_3ea89a0
                                  (&uStack_80,*(undefined8 *)puVar3), lVar8 = lStack_70,
              (uVar10 & 1) != 0) {
          if (*(long *)(param_1 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_012d0ef0();
          }
          lVar9 = System_Collections_Generic_List_object___get_Item_21fc76c
                            (*(long *)(param_1 + 0x18),iVar15,*(undefined8 *)puVar6);
          if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_012d0ef0();
          }
          uVar7 = Modules_Contexts_Application_Player_Scripts_ProfileFrameInfo__get_IsValid_1379e0c
                            (lVar8,0);
          if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_012d0ef0();
          }
          Modules_Contexts_Home_UI_Profile_Scripts_ProfileFrameSpriteSelectionFrame__Initialize_2989f80
                    (lVar9,lVar8,~uVar7 & 1);
          lVar9 = *plVar14;
          if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_012d0ef0();
          }
          uVar11 = *(undefined8 *)(lVar8 + 0x10);
          lVar8 = *(long *)(lVar9 + 0x10);
          lVar13 = *(long *)puVar2;
          *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
          if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_012d0ef0();
          }
          uVar7 = *(uint *)(lVar9 + 0x18);
          if (uVar7 < *(uint *)(lVar8 + 0x18)) {
            *(uint *)(lVar9 + 0x18) = uVar7 + 1;
            puVar12 = (undefined8 *)(lVar8 + (long)(int)uVar7 * 8 + 0x20);
            *puVar12 = uVar11;
            FUN_012d0d74(puVar12);
          }
          else {
            (**(code **)(*(long *)(*(long *)(*(long *)(lVar13 + 0x20) + 0xc0) + 0x58) + 8))();
          }
          iVar15 = iVar15 + 1;
        }
        System_Collections_Generic_List_Enumerator_object___Dispose_3ea899c
                  (&uStack_80,*(undefined8 *)puVar5);
        if (((**(long **)(*(long *)puVar1 + 0xb8) != 0) &&
            (lVar8 = *(long *)(**(long **)(*(long *)puVar1 + 0xb8) + 0x18), lVar8 != 0)) &&
           (lVar8 = Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                              (lVar8,*(undefined8 *)puVar4), lVar8 != 0)) {
          uVar10 = Modules_Contexts_Home_MagicPass_Scripts_MagicPassService__IsEventActive_38dc758
                             (lVar8,0);
          if ((uVar10 & 1) != 0) {
            lVar8 = Modules_Contexts_Home_MagicPass_Scripts_MagicPassService__GetMagicPassFrameInfo_38deaa4
                              (lVar8,0);
            if ((lVar8 == 0) || (*plVar14 == 0)) goto LAB_02a87dd0;
            uVar10 = System_Collections_Generic_List_object___Contains_21fce6c
                               (*plVar14,*(undefined8 *)(lVar8 + 0x10),
                                *(undefined8 *)PTR_DAT_05771d70);
            if ((uVar10 & 1) == 0) {
              if ((*(long *)(param_1 + 0x18) == 0) ||
                 (lVar9 = System_Collections_Generic_List_object___get_Item_21fc76c
                                    (*(long *)(param_1 + 0x18),iVar15,*(undefined8 *)puVar6),
                 lVar9 == 0)) goto LAB_02a87dd0;
              Modules_Contexts_Home_UI_Profile_Scripts_ProfileFrameSpriteSelectionFrame__Initialize_2989f80
                        (lVar9,lVar8,1);
              iVar15 = iVar15 + 1;
            }
          }
          Modules_Contexts_Home_UI_Profile_Scripts_ProfileFrameSelectionContainer__DisableEmptyFrames_298a3b0
                    (param_1,iVar15);
          Modules_Contexts_Home_UI_Profile_Scripts_ProfileFrameSelectionContainer__UpdateFrames_298a44c
                    (param_1);
          return;
        }
      }
    }
  }
LAB_02a87dd0:
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

