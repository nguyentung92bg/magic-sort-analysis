/* IL2CPP: Modules.Contexts.Home.UI.Profile.Scripts.ProfileFrameSelectionContainer$$GetPlayerFrames
System_Collections_Generic_List_ProfileFrameInfo__o* Modules_Contexts_Home_UI_Profile_Scripts_ProfileFrameSelectionContainer__GetPlayerFrames (Modules_Contexts_Home_UI_Profile_Scripts_ProfileFrameSelectionContainer_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Home.UI.Profile.Scripts.ProfileFrameSelectionContainer$$GetPlayerFrames
   System_Collections_Generic_List_ProfileFrameInfo__o*
   Modules_Contexts_Home_UI_Profile_Scripts_ProfileFrameSelectionContainer__GetPlayerFrames
   (Modules_Contexts_Home_UI_Profile_Scripts_ProfileFrameSelectionContainer_o* __this, const
   MethodInfo* method); */

long Modules_Contexts_Home_UI_Profile_Scripts_ProfileFrameSelectionContainer__GetPlayerFrames_298a050
               (void)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long *plVar5;
  long lVar6;
  undefined8 *puVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  int *piVar13;
  undefined8 uVar14;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  long lStack_50;
  
  puVar2 = PTR_DAT_0576aae0;
  if ((bRam0000000005c2d7b4 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057a1e60);
    FUN_012d0dc8(PTR_DAT_057dc218);
    FUN_012d0dc8(PTR_DAT_0576aae0);
    FUN_012d0dc8(PTR_DAT_057dd380);
    FUN_012d0dc8(PTR_DAT_057d3930);
    FUN_012d0dc8(PTR_DAT_05814400);
    FUN_012d0dc8(PTR_DAT_057636d0);
    FUN_012d0dc8(PTR_DAT_05771a60);
    FUN_012d0dc8(PTR_DAT_057ec898);
    FUN_012d0dc8(PTR_DAT_057fdfd8);
    FUN_012d0dc8(PTR_DAT_057a7ad0);
    bRam0000000005c2d7b4 = 1;
  }
  uStack_58 = 0;
  lStack_50 = 0;
  uStack_60 = 0;
  lVar9 = **(long **)(*(long *)puVar2 + 0xb8);
  if ((lVar9 != 0) && (lVar9 = *(long *)(lVar9 + 0x18), lVar9 != 0)) {
    plVar5 = (long *)Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                               (lVar9,*(undefined8 *)PTR_DAT_057a1e60);
    puVar3 = PTR_DAT_057a7ad0;
    lVar9 = **(long **)(*(long *)puVar2 + 0xb8);
    if ((lVar9 != 0) && (lVar9 = *(long *)(lVar9 + 0x18), lVar9 != 0)) {
      lVar9 = Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                        (lVar9,*(undefined8 *)PTR_DAT_057dc218);
      lVar6 = thunk_FUN_01320e48(*(undefined8 *)puVar3);
      if ((lVar6 != 0) &&
         (System_Collections_Generic_List_object____ctor_21fc1fc
                    (lVar6,*(undefined8 *)PTR_DAT_057fdfd8), plVar5 != (long *)0x0)) {
        lVar10 = *plVar5;
        uVar11 = (ulong)*(ushort *)(lVar10 + 0x12a);
        if (uVar11 != 0) {
          piVar13 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
          do {
            if (*(long *)(piVar13 + -2) == *(long *)PTR_DAT_057636d0) {
              puVar7 = (undefined8 *)(lVar10 + (long)(*piVar13 + 0x37) * 0x10 + 0x138);
              goto LAB_02a8a1ec;
            }
            uVar11 = uVar11 - 1;
            piVar13 = piVar13 + 4;
          } while (uVar11 != 0);
        }
        puVar7 = (undefined8 *)FUN_0131971c(plVar5,*(long *)PTR_DAT_057636d0,0x37);
LAB_02a8a1ec:
        lVar10 = (*(code *)*puVar7)(plVar5,puVar7[1]);
        puVar4 = PTR_DAT_057dd380;
        puVar3 = PTR_DAT_057d3930;
        puVar2 = PTR_DAT_05771a60;
        if (lVar10 != 0) {
          System_Collections_Generic_List_object___GetEnumerator_21fd5c8
                    (&uStack_78,lVar10,*(undefined8 *)PTR_DAT_057ec898);
          uStack_58 = uStack_70;
          uStack_60 = uStack_78;
          lStack_50 = lStack_68;
          while( true ) {
            uVar11 = System_Collections_Generic_List_Enumerator_object___MoveNext_3ea89a0
                               (&uStack_60,*(undefined8 *)puVar3);
            lVar10 = lStack_50;
            if ((uVar11 & 1) == 0) {
              System_Collections_Generic_List_Enumerator_object___Dispose_3ea899c
                        (&uStack_60,*(undefined8 *)puVar4);
              return lVar6;
            }
            if (lStack_50 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_012d0ef0();
            }
            if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_012d0ef0();
            }
            uVar14 = *(undefined8 *)(lStack_50 + 0x10);
            lVar8 = Modules_Contexts_Home_MagicPass_Scripts_MagicPassService__GetMagicPassFrameInfo_38deaa4
                              (lVar9,0);
            if (lVar8 == 0) break;
            uVar11 = System_String__op_Equality_1ec12e0(uVar14,*(undefined8 *)(lVar8 + 0x10),0);
            if (((uVar11 & 1) == 0) ||
               (uVar11 = Modules_Contexts_Home_MagicPass_Scripts_MagicPassService__IsEventActive_38dc758
                                   (lVar9,0), (uVar11 & 1) != 0)) {
              lVar8 = *(long *)(lVar6 + 0x10);
              lVar12 = *(long *)puVar2;
              *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
              if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_012d0ef0();
              }
              uVar1 = *(uint *)(lVar6 + 0x18);
              if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                *(uint *)(lVar6 + 0x18) = uVar1 + 1;
                plVar5 = (long *)(lVar8 + (long)(int)uVar1 * 8 + 0x20);
                *plVar5 = lVar10;
                FUN_012d0d74(plVar5,lVar10);
              }
              else {
                (**(code **)(*(long *)(*(long *)(*(long *)(lVar12 + 0x20) + 0xc0) + 0x58) + 8))
                          (lVar6,lVar10);
              }
            }
          }
                    /* WARNING: Subroutine does not return */
          FUN_012d0ef0();
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

