/* IL2CPP: Modules.Contexts.GamePlay.Board.Items.Scripts.Generator.GeneratorView$$Spawn
void Modules_Contexts_GamePlay_Board_Items_Scripts_Generator_GeneratorView__Spawn (Modules_Contexts_GamePlay_Board_Items_Scripts_Generator_GeneratorView_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.GamePlay.Board.Items.Scripts.Generator.GeneratorView$$Spawn
   void Modules_Contexts_GamePlay_Board_Items_Scripts_Generator_GeneratorView__Spawn
   (Modules_Contexts_GamePlay_Board_Items_Scripts_Generator_GeneratorView_o* __this, const
   MethodInfo* method); */

void Modules_Contexts_GamePlay_Board_Items_Scripts_Generator_GeneratorView__Spawn_2751c60
               (long *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  undefined4 *puVar3;
  ulong uVar4;
  long lVar5;
  int *piVar6;
  long *plVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  
  if ((bRam0000000005c2c6fd & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_0575a2d8);
    bRam0000000005c2c6fd = 1;
  }
  plVar7 = (long *)param_1[3];
  if (cRam0000000005c230a9 == '\0') {
    FUN_012d0dc8(PTR_DAT_05805c10);
    cRam0000000005c230a9 = '\x01';
  }
  if (plVar7 != (long *)0x0) {
    lVar2 = *plVar7;
    lVar5 = *(long *)(*(long *)PTR_DAT_05805c10 + 0xb8);
    uVar4 = (ulong)*(ushort *)(lVar2 + 0x12a);
    uVar10 = *(undefined4 *)(lVar5 + 0xc);
    uVar9 = *(undefined4 *)(lVar5 + 0x10);
    uVar8 = *(undefined4 *)(lVar5 + 0x14);
    if (uVar4 != 0) {
      piVar6 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == *(long *)PTR_DAT_0575a2d8) {
          puVar1 = (undefined8 *)(lVar2 + (long)(*piVar6 + 7) * 0x10 + 0x138);
          goto LAB_02851d2c;
        }
        uVar4 = uVar4 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar4 != 0);
    }
    puVar1 = (undefined8 *)FUN_0131971c(plVar7,*(long *)PTR_DAT_0575a2d8,7);
LAB_02851d2c:
    (*(code *)*puVar1)(uVar10,uVar9,uVar8,plVar7,puVar1[1]);
    lVar2 = param_1[8];
    if (cRam0000000005c25812 == '\0') {
      FUN_012d0dc8(PTR_DAT_057f4aa8);
      cRam0000000005c25812 = '\x01';
    }
    if (lVar2 != 0) {
      puVar3 = *(undefined4 **)(*(long *)PTR_DAT_057f4aa8 + 0xb8);
      UnityEngine_Transform__set_localRotation_4092f3c
                (*puVar3,puVar3[1],puVar3[2],puVar3[3],lVar2,0);
      if (param_1[10] != 0) {
        UnityEngine_GameObject__SetActive_408e318(param_1[10],0,0);
        (**(code **)(*param_1 + 0x1b8))(param_1,*(undefined8 *)(*param_1 + 0x1c0));
        if (param_1[0xb] != 0) {
          UnityEngine_GameObject__SetActive_408e318(param_1[0xb],1,0);
          lVar2 = param_1[0xc];
          if (lVar2 != 0) {
            if (pcRam0000000005c3a388 == (code *)0x0) {
              pcRam0000000005c3a388 = (code *)FUN_012d0d84(&UNK_043edeb4);
            }
                    /* WARNING: Could not recover jumptable at 0x0418e358. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (*pcRam0000000005c3a388)(lVar2,1);
            return;
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

