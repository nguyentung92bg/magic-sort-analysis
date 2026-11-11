/* IL2CPP: Modules.Contexts.Home.UI.Profile.Scripts.ProfileNameStyleSelectionContainer$$Initialize
void Modules_Contexts_Home_UI_Profile_Scripts_ProfileNameStyleSelectionContainer__Initialize (Modules_Contexts_Home_UI_Profile_Scripts_ProfileNameStyleSelectionContainer_o* __this, System_Collections_Generic_List_string__o* allNameStyles, Modules_Contexts_Application_Player_Scripts_ProfileNameStyleInfo_o* activeNameStyleInfo, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Home.UI.Profile.Scripts.ProfileNameStyleSelectionContainer$$Initialize
   void Modules_Contexts_Home_UI_Profile_Scripts_ProfileNameStyleSelectionContainer__Initialize
   (Modules_Contexts_Home_UI_Profile_Scripts_ProfileNameStyleSelectionContainer_o* __this,
   System_Collections_Generic_List_string__o* allNameStyles,
   Modules_Contexts_Application_Player_Scripts_ProfileNameStyleInfo_o* activeNameStyleInfo, const
   MethodInfo* method); */

void Modules_Contexts_Home_UI_Profile_Scripts_ProfileNameStyleSelectionContainer__Initialize_2987e50
               (long param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  uint uVar6;
  long lVar7;
  long *plVar8;
  undefined8 *puVar9;
  long lVar10;
  undefined8 uVar11;
  ulong uVar12;
  long lVar13;
  int *piVar14;
  long *plVar15;
  long *plVar16;
  undefined8 uVar17;
  int iVar18;
  undefined8 uStack_98;
  undefined8 uStack_90;
  long lStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  long lStack_70;
  
  puVar2 = PTR_DAT_05778c18;
  if ((bRam0000000005c2d7c1 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057a1e60);
    FUN_012d0dc8(PTR_DAT_057dc218);
    FUN_012d0dc8(PTR_DAT_0576aae0);
    FUN_012d0dc8(PTR_DAT_057eb858);
    FUN_012d0dc8(PTR_DAT_057ae630);
    FUN_012d0dc8(PTR_DAT_0579db80);
    FUN_012d0dc8(PTR_DAT_057636d0);
    FUN_012d0dc8(PTR_DAT_05801700);
    FUN_012d0dc8(PTR_DAT_05771d70);
    FUN_012d0dc8(PTR_DAT_057ffcd8);
    FUN_012d0dc8(PTR_DAT_05766950);
    FUN_012d0dc8(PTR_DAT_057dbb00);
    FUN_012d0dc8(PTR_DAT_0575d018);
    FUN_012d0dc8(PTR_DAT_05778c18);
    bRam0000000005c2d7c1 = 1;
  }
  uStack_78 = 0;
  lStack_70 = 0;
  uStack_80 = 0;
  plVar16 = (long *)(param_1 + 0x28);
  *plVar16 = param_2;
  FUN_012d0d74(plVar16,param_2);
  *(undefined8 *)(param_1 + 0x20) = param_3;
  FUN_012d0d74((undefined8 *)(param_1 + 0x20),param_3);
  lVar7 = thunk_FUN_01320e48(*(undefined8 *)puVar2);
  puVar2 = PTR_DAT_0576aae0;
  if (lVar7 != 0) {
    System_Collections_Generic_List_object____ctor_21fc1fc(lVar7,*(undefined8 *)PTR_DAT_05766950);
    plVar15 = (long *)(param_1 + 0x30);
    *plVar15 = lVar7;
    FUN_012d0d74(plVar15,lVar7);
    lVar7 = **(long **)(*(long *)puVar2 + 0xb8);
    if (((lVar7 != 0) && (lVar7 = *(long *)(lVar7 + 0x18), lVar7 != 0)) &&
       (plVar8 = (long *)Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                                   (lVar7,*(undefined8 *)PTR_DAT_057a1e60), plVar8 != (long *)0x0))
    {
      lVar7 = *plVar8;
      uVar12 = (ulong)*(ushort *)(lVar7 + 0x12a);
      if (uVar12 != 0) {
        piVar14 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar14 + -2) == *(long *)PTR_DAT_057636d0) {
            puVar9 = (undefined8 *)(lVar7 + (long)(*piVar14 + 0xe) * 0x10 + 0x138);
            goto LAB_02a8802c;
          }
          uVar12 = uVar12 - 1;
          piVar14 = piVar14 + 4;
        } while (uVar12 != 0);
      }
      puVar9 = (undefined8 *)FUN_0131971c(plVar8,*(long *)PTR_DAT_057636d0,0xe);
LAB_02a8802c:
      lVar7 = (*(code *)*puVar9)(plVar8,puVar9[1]);
      puVar5 = PTR_DAT_05801700;
      puVar1 = PTR_DAT_0575d018;
      if ((lVar7 != 0) && (*plVar16 != 0)) {
        uVar17 = *(undefined8 *)(lVar7 + 0x18);
        if (*(int *)(*plVar16 + 0x18) < 1) {
          iVar18 = 0;
        }
        else {
          lVar7 = Modules_Contexts_Application_Player_Scripts_ProfileNameStyleInfo__get_Default_137a2c0
                            (0);
          if (((*(long *)(param_1 + 0x18) == 0) ||
              (lVar10 = System_Collections_Generic_List_object___get_Item_21fc76c
                                  (*(long *)(param_1 + 0x18),0,*(undefined8 *)puVar1), lVar10 == 0))
             || ((Modules_Contexts_Home_UI_Profile_Scripts_ProfileNameStyleSelectionFrame__Initialize_298aef8
                            (lVar10,lVar7,0,uVar17), lVar7 == 0 || (lVar10 = *plVar15, lVar10 == 0))
                )) goto LAB_02a88300;
          uVar11 = *(undefined8 *)(lVar7 + 0x10);
          lVar7 = *(long *)(lVar10 + 0x10);
          lVar13 = *(long *)puVar5;
          *(int *)(lVar10 + 0x1c) = *(int *)(lVar10 + 0x1c) + 1;
          if (lVar7 == 0) goto LAB_02a88300;
          uVar6 = *(uint *)(lVar10 + 0x18);
          if (uVar6 < *(uint *)(lVar7 + 0x18)) {
            *(uint *)(lVar10 + 0x18) = uVar6 + 1;
            puVar9 = (undefined8 *)(lVar7 + (long)(int)uVar6 * 8 + 0x20);
            *puVar9 = uVar11;
            FUN_012d0d74(puVar9);
          }
          else {
            (**(code **)(*(long *)(*(long *)(*(long *)(lVar13 + 0x20) + 0xc0) + 0x58) + 8))();
          }
          iVar18 = 1;
        }
        lVar7 = Modules_Contexts_Home_UI_Profile_Scripts_ProfileNameStyleSelectionContainer__GetPlayerNameStyles_298afd0
                          ();
        puVar4 = PTR_DAT_057eb858;
        puVar3 = PTR_DAT_057ae630;
        if (lVar7 != 0) {
          System_Collections_Generic_List_object___GetEnumerator_21fd5c8
                    (&uStack_98,lVar7,*(undefined8 *)PTR_DAT_057ffcd8);
          uStack_78 = uStack_90;
          uStack_80 = uStack_98;
          lStack_70 = lStack_88;
          while (uVar12 = System_Collections_Generic_List_Enumerator_object___MoveNext_3ea89a0
                                    (&uStack_80,*(undefined8 *)puVar3), lVar7 = lStack_70,
                (uVar12 & 1) != 0) {
            if (*(long *)(param_1 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_012d0ef0();
            }
            lVar10 = System_Collections_Generic_List_object___get_Item_21fc76c
                               (*(long *)(param_1 + 0x18),iVar18,*(undefined8 *)puVar1);
            if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_012d0ef0();
            }
            uVar6 = Modules_Contexts_Application_Player_Scripts_ProfileNameStyleInfo__get_IsValid_137a1ac
                              (lVar7,0);
            if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_012d0ef0();
            }
            Modules_Contexts_Home_UI_Profile_Scripts_ProfileNameStyleSelectionFrame__Initialize_298aef8
                      (lVar10,lVar7,~uVar6 & 1,uVar17);
            lVar10 = *plVar15;
            if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_012d0ef0();
            }
            uVar11 = *(undefined8 *)(lVar7 + 0x10);
            lVar7 = *(long *)(lVar10 + 0x10);
            lVar13 = *(long *)puVar5;
            *(int *)(lVar10 + 0x1c) = *(int *)(lVar10 + 0x1c) + 1;
            if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_012d0ef0();
            }
            uVar6 = *(uint *)(lVar10 + 0x18);
            if (uVar6 < *(uint *)(lVar7 + 0x18)) {
              *(uint *)(lVar10 + 0x18) = uVar6 + 1;
              puVar9 = (undefined8 *)(lVar7 + (long)(int)uVar6 * 8 + 0x20);
              *puVar9 = uVar11;
              FUN_012d0d74(puVar9);
            }
            else {
              (**(code **)(*(long *)(*(long *)(*(long *)(lVar13 + 0x20) + 0xc0) + 0x58) + 8))();
            }
            iVar18 = iVar18 + 1;
          }
          System_Collections_Generic_List_Enumerator_object___Dispose_3ea899c
                    (&uStack_80,*(undefined8 *)puVar4);
          lVar7 = **(long **)(*(long *)puVar2 + 0xb8);
          if (((lVar7 != 0) && (lVar7 = *(long *)(lVar7 + 0x18), lVar7 != 0)) &&
             (lVar7 = Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                                (lVar7,*(undefined8 *)PTR_DAT_057dc218), lVar7 != 0)) {
            uVar12 = Modules_Contexts_Home_MagicPass_Scripts_MagicPassService__IsEventActive_38dc758
                               (lVar7,0);
            if ((uVar12 & 1) != 0) {
              lVar7 = Modules_Contexts_Home_MagicPass_Scripts_MagicPassService__GetMagicPassNameStyleInfo_38deb34
                                (lVar7,0);
              if ((lVar7 == 0) || (*plVar15 == 0)) goto LAB_02a88300;
              uVar12 = System_Collections_Generic_List_object___Contains_21fce6c
                                 (*plVar15,*(undefined8 *)(lVar7 + 0x10),
                                  *(undefined8 *)PTR_DAT_05771d70);
              if ((uVar12 & 1) == 0) {
                if ((*(long *)(param_1 + 0x18) == 0) ||
                   (lVar10 = System_Collections_Generic_List_object___get_Item_21fc76c
                                       (*(long *)(param_1 + 0x18),iVar18,*(undefined8 *)puVar1),
                   lVar10 == 0)) goto LAB_02a88300;
                Modules_Contexts_Home_UI_Profile_Scripts_ProfileNameStyleSelectionFrame__Initialize_298aef8
                          (lVar10,lVar7,1,uVar17);
                iVar18 = iVar18 + 1;
              }
            }
            Modules_Contexts_Home_UI_Profile_Scripts_ProfileNameStyleSelectionContainer__DisableEmptyNameStyles_298b330
                      (param_1,iVar18);
            Modules_Contexts_Home_UI_Profile_Scripts_ProfileNameStyleSelectionContainer__UpdateFrames_298b3cc
                      (param_1);
            return;
          }
        }
      }
    }
  }
LAB_02a88300:
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

