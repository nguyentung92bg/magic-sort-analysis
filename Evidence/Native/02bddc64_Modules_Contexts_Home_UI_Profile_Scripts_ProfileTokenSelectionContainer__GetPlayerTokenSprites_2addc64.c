/* IL2CPP: Modules.Contexts.Home.UI.Profile.Scripts.ProfileTokenSelectionContainer$$GetPlayerTokenSprites
System_Collections_Generic_List_ProfileTokenSprite__o* Modules_Contexts_Home_UI_Profile_Scripts_ProfileTokenSelectionContainer__GetPlayerTokenSprites (Modules_Contexts_Home_UI_Profile_Scripts_ProfileTokenSelectionContainer_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Home.UI.Profile.Scripts.ProfileTokenSelectionContainer$$GetPlayerTokenSprites
   System_Collections_Generic_List_ProfileTokenSprite__o*
   Modules_Contexts_Home_UI_Profile_Scripts_ProfileTokenSelectionContainer__GetPlayerTokenSprites
   (Modules_Contexts_Home_UI_Profile_Scripts_ProfileTokenSelectionContainer_o* __this, const
   MethodInfo* method); */

long Modules_Contexts_Home_UI_Profile_Scripts_ProfileTokenSelectionContainer__GetPlayerTokenSprites_2addc64
               (undefined8 param_1)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  undefined8 *puVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  int *piVar12;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  puVar2 = PTR_DAT_05818128;
  if ((bRam0000000005c2eafe & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057a1e60);
    FUN_012d0dc8(PTR_DAT_0576aae0);
    FUN_012d0dc8(PTR_DAT_05772548);
    FUN_012d0dc8(PTR_DAT_0579d7b0);
    FUN_012d0dc8(PTR_DAT_057d4c28);
    FUN_012d0dc8(PTR_DAT_057636d0);
    FUN_012d0dc8(PTR_DAT_058076e0);
    FUN_012d0dc8(PTR_DAT_0576c990);
    FUN_012d0dc8(PTR_DAT_0578cff0);
    FUN_012d0dc8(PTR_DAT_05818128);
    bRam0000000005c2eafe = 1;
  }
  uStack_40 = 0;
  uStack_38 = 0;
  uStack_48 = 0;
  lVar5 = thunk_FUN_01320e48(*(undefined8 *)puVar2);
  puVar2 = PTR_DAT_0576aae0;
  if (lVar5 != 0) {
    System_Collections_Generic_List_object____ctor_21fc1fc(lVar5,*(undefined8 *)PTR_DAT_0578cff0);
    if (((**(long **)(*(long *)puVar2 + 0xb8) != 0) &&
        (lVar6 = *(long *)(**(long **)(*(long *)puVar2 + 0xb8) + 0x18), lVar6 != 0)) &&
       (plVar7 = (long *)Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                                   (lVar6,*(undefined8 *)PTR_DAT_057a1e60), plVar7 != (long *)0x0))
    {
      lVar6 = *plVar7;
      uVar10 = (ulong)*(ushort *)(lVar6 + 0x12a);
      if (uVar10 != 0) {
        piVar12 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar12 + -2) == *(long *)PTR_DAT_057636d0) {
            puVar8 = (undefined8 *)(lVar6 + (long)(*piVar12 + 0x34) * 0x10 + 0x138);
            goto LAB_02bdddc4;
          }
          uVar10 = uVar10 - 1;
          piVar12 = piVar12 + 4;
        } while (uVar10 != 0);
      }
      puVar8 = (undefined8 *)FUN_0131971c(plVar7,*(long *)PTR_DAT_057636d0,0x34);
LAB_02bdddc4:
      lVar6 = (*(code *)*puVar8)(plVar7,puVar8[1]);
      puVar4 = PTR_DAT_058076e0;
      puVar3 = PTR_DAT_0579d7b0;
      puVar2 = PTR_DAT_05772548;
      if (lVar6 != 0) {
        System_Collections_Generic_List_object___GetEnumerator_21fd5c8
                  (&uStack_48,lVar6,*(undefined8 *)PTR_DAT_0576c990);
        while( true ) {
          do {
            uVar10 = System_Collections_Generic_List_Enumerator_object___MoveNext_3ea89a0
                               (&uStack_48,*(undefined8 *)puVar3);
            if ((uVar10 & 1) == 0) {
              System_Collections_Generic_List_Enumerator_object___Dispose_3ea899c
                        (&uStack_48,*(undefined8 *)puVar2);
              return lVar5;
            }
            lVar6 = Modules_Contexts_Home_UI_Profile_Scripts_ProfileTokenSelectionContainer__GetTokenSpriteById_2addf2c
                              (param_1,uStack_38);
          } while (lVar6 == 0);
          lVar9 = *(long *)(lVar5 + 0x10);
          lVar11 = *(long *)puVar4;
          *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
          if (lVar9 == 0) break;
          uVar1 = *(uint *)(lVar5 + 0x18);
          if (uVar1 < *(uint *)(lVar9 + 0x18)) {
            *(uint *)(lVar5 + 0x18) = uVar1 + 1;
            *(long *)(lVar9 + (long)(int)uVar1 * 8 + 0x20) = lVar6;
            FUN_012d0d74();
          }
          else {
            (**(code **)(*(long *)(*(long *)(*(long *)(lVar11 + 0x20) + 0xc0) + 0x58) + 8))(lVar5);
          }
        }
                    /* WARNING: Subroutine does not return */
        FUN_012d0ef0();
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

