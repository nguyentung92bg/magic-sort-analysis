/* IL2CPP: Modules.Contexts.GamePlay.Levels.Scripts.Serialization.LevelModelUtils$$get_GetSerializerSettings
Newtonsoft_Json_JsonSerializerSettings_o* Modules_Contexts_GamePlay_Levels_Scripts_Serialization_LevelModelUtils__get_GetSerializerSettings (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.GamePlay.Levels.Scripts.Serialization.LevelModelUtils$$get_GetSerializerSettings
   Newtonsoft_Json_JsonSerializerSettings_o*
   Modules_Contexts_GamePlay_Levels_Scripts_Serialization_LevelModelUtils__get_GetSerializerSettings
   (const MethodInfo* method); */

long Modules_Contexts_GamePlay_Levels_Scripts_Serialization_LevelModelUtils__get_GetSerializerSettings_1f1b1e8
               (void)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  long lVar9;
  long lVar10;
  
  puVar2 = PTR_DAT_0575ec38;
  if ((bRam0000000005c28653 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057bf460);
    FUN_012d0dc8(PTR_DAT_0580e660);
    FUN_012d0dc8(PTR_DAT_057ddd78);
    FUN_012d0dc8(PTR_DAT_057864d0);
    FUN_012d0dc8(PTR_DAT_0578c510);
    FUN_012d0dc8(PTR_DAT_057bc2b8);
    FUN_012d0dc8(PTR_DAT_057bea80);
    FUN_012d0dc8(PTR_DAT_057d62a0);
    FUN_012d0dc8(PTR_DAT_0575ec38);
    FUN_012d0dc8(PTR_DAT_057c80c0);
    FUN_012d0dc8(PTR_DAT_057cb758);
    FUN_012d0dc8(PTR_DAT_057737c0);
    FUN_012d0dc8(PTR_DAT_05769718);
    FUN_012d0dc8(PTR_DAT_057dc128);
    FUN_012d0dc8(PTR_DAT_057f33a8);
    bRam0000000005c28653 = 1;
  }
  if (**(long **)(*(long *)puVar2 + 0xb8) != 0) {
    return **(long **)(*(long *)puVar2 + 0xb8);
  }
  lVar5 = thunk_FUN_01320e48(*(undefined8 *)PTR_DAT_057bea80);
  puVar3 = PTR_DAT_05769718;
  if (lVar5 != 0) {
    Newtonsoft_Json_JsonSerializerSettings___ctor_3536b34(lVar5,0);
    Newtonsoft_Json_JsonSerializerSettings__set_TypeNameHandling_354360c(lVar5,4,0);
    Newtonsoft_Json_JsonSerializerSettings__set_ReferenceLoopHandling_354338c(lVar5,1,0);
    lVar6 = thunk_FUN_01320e48(*(undefined8 *)puVar3);
    puVar3 = PTR_DAT_057dc128;
    if (lVar6 != 0) {
      System_Collections_Generic_List_object____ctor_21fc1fc(lVar6,*(undefined8 *)PTR_DAT_057737c0);
      lVar7 = thunk_FUN_01320e48(*(undefined8 *)puVar3);
      puVar3 = PTR_DAT_057cb758;
      if (lVar7 != 0) {
        Modules_Infrastructure_Common_Scripts_UnityColorConverter___ctor_40e56dc(lVar7,0);
        lVar9 = *(long *)(lVar6 + 0x10);
        lVar10 = *(long *)puVar3;
        *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
        puVar4 = PTR_DAT_057f33a8;
        if (lVar9 != 0) {
          uVar1 = *(uint *)(lVar6 + 0x18);
          if (uVar1 < *(uint *)(lVar9 + 0x18)) {
            *(uint *)(lVar6 + 0x18) = uVar1 + 1;
            plVar8 = (long *)(lVar9 + (long)(int)uVar1 * 8 + 0x20);
            *plVar8 = lVar7;
            FUN_012d0d74(plVar8,lVar7);
          }
          else {
            (**(code **)(*(long *)(*(long *)(*(long *)(lVar10 + 0x20) + 0xc0) + 0x58) + 8))
                      (lVar6,lVar7);
          }
          lVar7 = thunk_FUN_01320e48(*(undefined8 *)puVar4);
          if (lVar7 != 0) {
            Modules_Infrastructure_Common_Scripts_UnityVector3Converter___ctor_40e601c(lVar7,0);
            lVar9 = *(long *)(lVar6 + 0x10);
            lVar10 = *(long *)puVar3;
            *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
            puVar4 = PTR_DAT_057bf460;
            if (lVar9 != 0) {
              uVar1 = *(uint *)(lVar6 + 0x18);
              if (uVar1 < *(uint *)(lVar9 + 0x18)) {
                *(uint *)(lVar6 + 0x18) = uVar1 + 1;
                plVar8 = (long *)(lVar9 + (long)(int)uVar1 * 8 + 0x20);
                *plVar8 = lVar7;
                FUN_012d0d74(plVar8,lVar7);
              }
              else {
                (**(code **)(*(long *)(*(long *)(*(long *)(lVar10 + 0x20) + 0xc0) + 0x58) + 8))
                          (lVar6,lVar7);
              }
              lVar7 = thunk_FUN_01320e48(*(undefined8 *)puVar4);
              if (lVar7 != 0) {
                Modules_Contexts_GamePlay_Board_Items_Scripts_Common_Serialization_BottleCollectionConverter___ctor_2f56490
                          (lVar7,0);
                lVar9 = *(long *)(lVar6 + 0x10);
                lVar10 = *(long *)puVar3;
                *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
                puVar4 = PTR_DAT_0580e660;
                if (lVar9 != 0) {
                  uVar1 = *(uint *)(lVar6 + 0x18);
                  if (uVar1 < *(uint *)(lVar9 + 0x18)) {
                    *(uint *)(lVar6 + 0x18) = uVar1 + 1;
                    plVar8 = (long *)(lVar9 + (long)(int)uVar1 * 8 + 0x20);
                    *plVar8 = lVar7;
                    FUN_012d0d74(plVar8,lVar7);
                  }
                  else {
                    (**(code **)(*(long *)(*(long *)(*(long *)(lVar10 + 0x20) + 0xc0) + 0x58) + 8))
                              (lVar6,lVar7);
                  }
                  lVar7 = thunk_FUN_01320e48(*(undefined8 *)puVar4);
                  if (lVar7 != 0) {
                    Modules_Contexts_GamePlay_Board_Items_Scripts_Common_Serialization_BottleItemModelListConverter___ctor_2f56814
                              (lVar7,0);
                    lVar9 = *(long *)(lVar6 + 0x10);
                    lVar10 = *(long *)puVar3;
                    *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
                    puVar4 = PTR_DAT_057864d0;
                    if (lVar9 != 0) {
                      uVar1 = *(uint *)(lVar6 + 0x18);
                      if (uVar1 < *(uint *)(lVar9 + 0x18)) {
                        *(uint *)(lVar6 + 0x18) = uVar1 + 1;
                        plVar8 = (long *)(lVar9 + (long)(int)uVar1 * 8 + 0x20);
                        *plVar8 = lVar7;
                        FUN_012d0d74(plVar8,lVar7);
                      }
                      else {
                        (**(code **)(*(long *)(*(long *)(*(long *)(lVar10 + 0x20) + 0xc0) + 0x58) +
                                    8))(lVar6,lVar7);
                      }
                      lVar7 = thunk_FUN_01320e48(*(undefined8 *)puVar4);
                      if (lVar7 != 0) {
                        Modules_LevelEditor_WaterSort_Common_Scripts_Serialization_EditorBottleCollectionConverter___ctor_37ac11c
                                  (lVar7,0);
                        lVar9 = *(long *)(lVar6 + 0x10);
                        lVar10 = *(long *)puVar3;
                        *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
                        puVar4 = PTR_DAT_057d62a0;
                        if (lVar9 != 0) {
                          uVar1 = *(uint *)(lVar6 + 0x18);
                          if (uVar1 < *(uint *)(lVar9 + 0x18)) {
                            *(uint *)(lVar6 + 0x18) = uVar1 + 1;
                            plVar8 = (long *)(lVar9 + (long)(int)uVar1 * 8 + 0x20);
                            *plVar8 = lVar7;
                            FUN_012d0d74(plVar8,lVar7);
                          }
                          else {
                            (**(code **)(*(long *)(*(long *)(*(long *)(lVar10 + 0x20) + 0xc0) + 0x58
                                                  ) + 8))(lVar6,lVar7);
                          }
                          lVar7 = thunk_FUN_01320e48(*(undefined8 *)puVar4);
                          if (lVar7 != 0) {
                            Newtonsoft_Json_JsonConverter___ctor_35384e0(lVar7,0);
                            lVar9 = *(long *)(lVar6 + 0x10);
                            lVar10 = *(long *)puVar3;
                            *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
                            puVar4 = PTR_DAT_057c80c0;
                            if (lVar9 != 0) {
                              uVar1 = *(uint *)(lVar6 + 0x18);
                              if (uVar1 < *(uint *)(lVar9 + 0x18)) {
                                *(uint *)(lVar6 + 0x18) = uVar1 + 1;
                                plVar8 = (long *)(lVar9 + (long)(int)uVar1 * 8 + 0x20);
                                *plVar8 = lVar7;
                                FUN_012d0d74(plVar8,lVar7);
                              }
                              else {
                                (**(code **)(*(long *)(*(long *)(*(long *)(lVar10 + 0x20) + 0xc0) +
                                                      0x58) + 8))(lVar6,lVar7);
                              }
                              lVar7 = thunk_FUN_01320e48(*(undefined8 *)puVar4);
                              if (lVar7 != 0) {
                                Newtonsoft_Json_JsonConverter___ctor_35384e0(lVar7,0);
                                lVar9 = *(long *)(lVar6 + 0x10);
                                lVar10 = *(long *)puVar3;
                                *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
                                puVar4 = PTR_DAT_057ddd78;
                                if (lVar9 != 0) {
                                  uVar1 = *(uint *)(lVar6 + 0x18);
                                  if (uVar1 < *(uint *)(lVar9 + 0x18)) {
                                    *(uint *)(lVar6 + 0x18) = uVar1 + 1;
                                    plVar8 = (long *)(lVar9 + (long)(int)uVar1 * 8 + 0x20);
                                    *plVar8 = lVar7;
                                    FUN_012d0d74(plVar8,lVar7);
                                  }
                                  else {
                                    (**(code **)(*(long *)(*(long *)(*(long *)(lVar10 + 0x20) + 0xc0
                                                                    ) + 0x58) + 8))(lVar6,lVar7);
                                  }
                                  lVar7 = thunk_FUN_01320e48(*(undefined8 *)puVar4);
                                  if (lVar7 != 0) {
                                    Modules_Contexts_GamePlay_Levels_Scripts_Cell_CellModelConverter___ctor_1e9167c
                                              (lVar7,0);
                                    lVar9 = *(long *)(lVar6 + 0x10);
                                    lVar10 = *(long *)puVar3;
                                    *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
                                    puVar4 = PTR_DAT_057bc2b8;
                                    if (lVar9 != 0) {
                                      uVar1 = *(uint *)(lVar6 + 0x18);
                                      if (uVar1 < *(uint *)(lVar9 + 0x18)) {
                                        *(uint *)(lVar6 + 0x18) = uVar1 + 1;
                                        plVar8 = (long *)(lVar9 + (long)(int)uVar1 * 8 + 0x20);
                                        *plVar8 = lVar7;
                                        FUN_012d0d74(plVar8,lVar7);
                                      }
                                      else {
                                        (**(code **)(*(long *)(*(long *)(*(long *)(lVar10 + 0x20) +
                                                                        0xc0) + 0x58) + 8))
                                                  (lVar6,lVar7);
                                      }
                                      lVar7 = thunk_FUN_01320e48(*(undefined8 *)puVar4);
                                      if (lVar7 != 0) {
                                        Modules_Contexts_GamePlay_BoardItems_Scripts_Common_ItemModelConverter___ctor_23064e0
                                                  (lVar7,0);
                                        lVar9 = *(long *)(lVar6 + 0x10);
                                        lVar10 = *(long *)puVar3;
                                        *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
                                        puVar4 = PTR_DAT_0578c510;
                                        if (lVar9 != 0) {
                                          uVar1 = *(uint *)(lVar6 + 0x18);
                                          if (uVar1 < *(uint *)(lVar9 + 0x18)) {
                                            *(uint *)(lVar6 + 0x18) = uVar1 + 1;
                                            plVar8 = (long *)(lVar9 + (long)(int)uVar1 * 8 + 0x20);
                                            *plVar8 = lVar7;
                                            FUN_012d0d74(plVar8,lVar7);
                                          }
                                          else {
                                            (**(code **)(*(long *)(*(long *)(*(long *)(lVar10 + 0x20
                                                                                      ) + 0xc0) +
                                                                  0x58) + 8))(lVar6,lVar7);
                                          }
                                          lVar7 = thunk_FUN_01320e48(*(undefined8 *)puVar4);
                                          if (lVar7 != 0) {
                                            Modules_Contexts_GamePlay_Board_Items_Scripts_Common_Serialization_ExternalSnitchObjectListConverter___ctor_2f5769c
                                                      (lVar7,0);
                                            lVar9 = *(long *)(lVar6 + 0x10);
                                            lVar10 = *(long *)puVar3;
                                            *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
                                            if (lVar9 != 0) {
                                              uVar1 = *(uint *)(lVar6 + 0x18);
                                              if (uVar1 < *(uint *)(lVar9 + 0x18)) {
                                                *(uint *)(lVar6 + 0x18) = uVar1 + 1;
                                                plVar8 = (long *)(lVar9 + (long)(int)uVar1 * 8 +
                                                                 0x20);
                                                *plVar8 = lVar7;
                                                FUN_012d0d74(plVar8,lVar7);
                                              }
                                              else {
                                                (**(code **)(*(long *)(*(long *)(*(long *)(lVar10 + 
                                                  0x20) + 0xc0) + 0x58) + 8))(lVar6,lVar7);
                                              }
                                              *(long *)(lVar5 + 0xd8) = lVar6;
                                              FUN_012d0d74((long *)(lVar5 + 0xd8),lVar6);
                                              **(long **)(*(long *)puVar2 + 0xb8) = lVar5;
                                              FUN_012d0d74(*(undefined8 *)(*(long *)puVar2 + 0xb8),
                                                           lVar5);
                                              return **(long **)(*(long *)puVar2 + 0xb8);
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

