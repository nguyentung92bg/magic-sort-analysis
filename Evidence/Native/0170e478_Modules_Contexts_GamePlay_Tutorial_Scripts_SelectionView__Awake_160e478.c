/* IL2CPP: Modules.Contexts.GamePlay.Tutorial.Scripts.SelectionView$$Awake
void Modules_Contexts_GamePlay_Tutorial_Scripts_SelectionView__Awake (Modules_Contexts_GamePlay_Tutorial_Scripts_SelectionView_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.GamePlay.Tutorial.Scripts.SelectionView$$Awake
   void Modules_Contexts_GamePlay_Tutorial_Scripts_SelectionView__Awake
   (Modules_Contexts_GamePlay_Tutorial_Scripts_SelectionView_o* __this, const MethodInfo* method);
    */

void Modules_Contexts_GamePlay_Tutorial_Scripts_SelectionView__Awake_160e478(long param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  long lVar9;
  long *plVar10;
  undefined8 uVar11;
  
  puVar5 = PTR_DAT_057bd670;
  if ((bRam0000000005c24457 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057f4148);
    FUN_012d0dc8(PTR_DAT_0581a118);
    FUN_012d0dc8(PTR_DAT_0580d880);
    FUN_012d0dc8(PTR_DAT_057bd670);
    FUN_012d0dc8(PTR_DAT_057f3400);
    FUN_012d0dc8(PTR_DAT_05781a58);
    bRam0000000005c24457 = 1;
  }
  lVar8 = thunk_FUN_01320e48(*(undefined8 *)puVar5);
  puVar4 = PTR_DAT_0580d880;
  if (lVar8 != 0) {
    System_Collections_Generic_List_object____ctor_21fc1fc(lVar8,*(undefined8 *)PTR_DAT_0580d880);
    *(long *)(param_1 + 0x38) = lVar8;
    FUN_012d0d74((long *)(param_1 + 0x38),lVar8);
    lVar8 = thunk_FUN_01320e48(*(undefined8 *)puVar5);
    puVar5 = PTR_DAT_0581a118;
    if (lVar8 != 0) {
      System_Collections_Generic_List_object____ctor_21fc1fc(lVar8,*(undefined8 *)puVar4);
      *(long *)(param_1 + 0x40) = lVar8;
      FUN_012d0d74((long *)(param_1 + 0x40),lVar8);
      uVar11 = *(undefined8 *)(param_1 + 0x28);
      lVar8 = thunk_FUN_01320e48(*(undefined8 *)puVar5);
      puVar7 = PTR_DAT_057f4148;
      puVar4 = PTR_DAT_05781a58;
      if (lVar8 != 0) {
        Modules_Infrastructure_Common_Scripts_Generation_Basic_BasicViewGenerator_object____ctor_1a98f84
                  (lVar8,uVar11,*(undefined8 *)PTR_DAT_057f4148);
        lVar9 = thunk_FUN_01320e48(*(undefined8 *)puVar4);
        puVar6 = PTR_DAT_057f3400;
        if (lVar9 != 0) {
          Modules_Infrastructure_Common_Scripts_Pool_Pool_object____ctor_30f955c
                    (lVar9,lVar8,1,*(undefined8 *)PTR_DAT_057f3400);
          *(long *)(param_1 + 0x18) = lVar9;
          FUN_012d0d74((long *)(param_1 + 0x18),lVar9);
          uVar11 = *(undefined8 *)(param_1 + 0x30);
          lVar8 = thunk_FUN_01320e48(*(undefined8 *)puVar5);
          if (lVar8 != 0) {
            Modules_Infrastructure_Common_Scripts_Generation_Basic_BasicViewGenerator_object____ctor_1a98f84
                      (lVar8,uVar11,*(undefined8 *)puVar7);
            lVar9 = thunk_FUN_01320e48(*(undefined8 *)puVar4);
            if (lVar9 != 0) {
              Modules_Infrastructure_Common_Scripts_Pool_Pool_object____ctor_30f955c
                        (lVar9,lVar8,1,*(undefined8 *)puVar6);
              plVar10 = (long *)(param_1 + 0x20);
              *plVar10 = lVar9;
              if (iRam0000000005c3d478 != 0) {
                puVar1 = (ulong *)(((ulong)plVar10 >> 0x12 & 0x7fff) * 8 + 0x5c86b80);
                do {
                  cVar2 = '\x01';
                  bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
                  if (bVar3) {
                    *puVar1 = *puVar1 | 1L << ((ulong)plVar10 >> 0xc & 0x3f);
                    cVar2 = ExclusiveMonitorsStatus();
                  }
                } while (cVar2 != '\0');
              }
              return;
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

